#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>
#include <time.h>
#include "SwinGame.h"
//written by me
#include "local/helper.c"
#include "local/commands.c"
//pulled from github
#include "local/vec.c"



#define MAX_PEERS 10;

/*
 * Helper Functions and Procedures
 */




char *get_ip_str(uint32_t ip_dec)  {
    char *hex_str;
    dec_to_hex(ip_dec,hex_str);
    char *hex;

    char *ip_str;
    hex_str_to_ipv4(hex_str,ip_str);
    return ip_str;
}

char* get_own_ip(connection self) {
    uint32_t  ip = connection_ip(self);
    char str[26] = {0};
    char *ip_str = (char *)malloc(strlen(str)+1);
    int_to_ip(ip,str);
    strcpy(ip_str,str);
    return ip_str;
}

char *get_user_ip(int user_index) {
    connection user = retreive_connection(user_index);
    uint32_t ip_dec = connection_ip(user);

    //proceeding code took me 4 hours to figure out...
    char ip_str[26] = {0};
    char *str = (char *)malloc(strlen(ip_str)+1);

    int_to_ip(ip_dec, ip_str);
    strcpy(str,ip_str);

    return str;
}

void show_notice(char *notice) {
    label_with_id_set_text("NoticeLabel", notice);
    clear_screen_to(ColorWhite);
    draw_interface();
    update_interface();
    refresh_screen_restrict_fps(60);
}

/*
 * Host & Client functions and procedures
 */

void show_message(char message[456]) {
    panel c_panel = load_panel("ChatArea.txt");
    region r = region_with_id(c_panel, "MessagesList");
    guilist list = list_from_region(r);
    add_item_by_text(list, message);
}

void send_message(char message[456], connection peer) {
    show_notice("Sending message\n");
    send_tcpmessage(message, peer);
    show_message(message);
    show_notice("Message sent");
}



void listen_for_message(connection peer) {
    if (tcpmessage_received()) {
        char received_message[456];
        read_message(peer, received_message);
        char *filtered_message = filter_language(received_message);
        printf("%s",filtered_message);
        show_message(filtered_message);
    }
}

void listen_for_command(connection sock) {
    if(tcpmessage_received()) {
        char received_message[456];
        read_message(sock, received_message);
        if(message_is_command(received_message)) {
            char *message_by_user;
            parse_command(received_message);
        }
    }
}

void show_connected_user(panel chat, user connected_user) {
    region r = region_with_id(chat, "ConnectionList");
    guilist list = list_from_region(r);
    char *username = connected_user.username;
    add_item_by_text(list, username);
}

void show_connected_users(user_array connected_users, panel chat) {
    user it_user;
    int i;
    vec_foreach(&connected_users, it_user,i) {
        show_connected_user(chat, it_user);
    }
}

/*
 * Client Procedures/functions
 */

connection connect_as_client(char *host, int port) {
    connection result = NULL;
    show_notice("Connecting as peer");
    while (result == NULL) {
        result = create_tcpconnection_to_host(host, port);
    }

    show_notice("Connection Established!");
    return result;
}

void send_user_details(connection client) {
    user self;
    guitextbox usernm_box = text_box_from_id("usernameBox");
    char *ip_addr = get_own_ip(client);
    char *username;
    printf("copying\n");
    strcpy_ukwn(usernm_box->content_string,&username);
    printf("copied\n");

    self.username = username;
    self.ip_addr = ip_addr;

    printf("username: %s\n", self.username);
    printf("ip: %s\n",ip_addr);


    char message[456] = {0};
    sprintf(message, "!user %s %s", self.username,self.ip_addr);
    printf("%s",message);
    exit(0);
    send_message(message,client);
}

void store_user_data() {

}



/*
 * Host functions/procedures
 */

void h_broadcast_users(connection host) {

}

void h_listen_for_new_user(connection *host) {
    //Quarantining this... It's dangerous
    connection peer = NULL;
    accept_tcpconnection();
    peer = fetch_connection();
    show_notice("New user found");

    if(peer != NULL) {
        host = &peer;
    }

}

connection connect_as_host(int port) {
    connection result = NULL;
    show_notice("Connecting as host...");
    create_tcphost(port);
    while (result == NULL) {
        accept_tcpconnection();
        result = fetch_connection();
    }


    show_notice("Connection Established!");
    return result;
}



void run_program() {
    panel chat_panel;
    connection peer;
    bool is_connected = false;
    user_array connected_users;
    vec_init(&connected_users);

    open_graphics_window("Despacito Chat", 600, 500);
    load_resource_bundle("ChatBundle.txt", true);
    chat_panel = load_panel("ChatArea.txt");

    show_panel(chat_panel);
    clear_screen_to(color_white());

    guiset_foreground_color(color_black());
    guiset_background_color(color_white());

    draw_interface();

    do {
        refresh_screen();
        process_events();
       clear_screen_to(color_white());


        if (button_named_clicked("HostButton")) {
            guitextbox portbox = text_box_from_id("portBox");

            unsigned int portnum = strtouint(portbox->content_string);
            if (portnum == 0L) {
                show_notice("You must enter a port NUMBER");
            } else {
                peer = connect_as_host(portnum);
                is_connected = true;
                show_notice("You are the host");
            }

        } else if (button_named_clicked("ConnectButton")) {
            guitextbox portbox = text_box_from_id("portBox");
            guitextbox hostbox = text_box_from_id("hostBox");


            if(strcmp(hostbox->content_string, "") ==0 || strcmp(hostbox->content_string, "Input HOST") == 0) {
                show_notice("You must enter host");
            } else {
                unsigned int portnum = strtouint(portbox->content_string);
                if (portnum == 0L) {
                    show_notice("You must enter a port NUMBER");
                } else {
                    peer = connect_as_client(hostbox->content_string, portnum);
                    show_notice("Connected");
                    is_connected = true;
                }
            }

        }

        if (button_named_clicked("SendButton")) {
            if (is_connected) {
                guitextbox message = text_box_from_id("messageBox");
                send_message(message->content_string, peer);
            } else {
                show_notice("You have not connected yet");
            }
        }

        if (is_connected) {
            // h_listen_for_new_user(peer);
            listen_for_message(peer);
        }

        draw_interface();
        update_interface();

    } while (!window_close_requested());

    release_all_resources();
    close_all_connections();
    close_all_sockets();
}


int main() {
  run_program();

    return 0;
}
