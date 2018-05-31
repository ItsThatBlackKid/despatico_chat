//
// Created by sheku on 27/05/2018.
//

#include "client.h"



void send_message(char message[456], connection peer) {
    show_notice("Sending message");
    char name[300];
    textbox_text_with_id("UsernameBox",name);
    sign_name(message,name);
    show_message(message);
    send_tcpmessage(message,peer);
    show_notice("Message sent");
}

void send_init_msg(char message[456], connection peer) {
    show_notice("Sending message");
    send_tcpmessage(message,peer);
    show_notice("Message sent");
}

void listen_for_message(connection peer) {
    if(tcpmessage_received()) {
        char received_message[456];
        read_message(peer,received_message);

        if(!is_user_command(received_message)) {
            char *filtered_message = filter_language(received_message);
            show_message(filtered_message);
        } else {
                //read the user, broadcast
                user parsed = parse_command_user(received_message);
                panel m_pane = load_panel("ChatArea.txt");
                show_connected_user(m_pane,parsed);

        }

    }
}


void send_user_details(connection client) {
    char username[456];
    char *uname;
    textbox_text_with_id("UsernameBox",username);
    user self;
    strcpy_ukwn(username,&uname);
    self.username = uname;
    self.ip_addr =get_own_ip(client);
    char *user_str = user_to_command(self);
    send_init_msg(user_str, client);
    free(self.username);
    free(self.ip_addr);
}


connection connect_as_client(char *host, int port) {
    connection result = NULL;
    show_notice("Connecting as peer");
    while (result == NULL) {
        result = create_tcpconnection_to_host(host, port);
    }

    show_notice("Connection Established!");
    return result;
}





