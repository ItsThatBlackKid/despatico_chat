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
#include "local/management.c"
#include "local/server.c"
#include "local/client.c"
//pulled from github
#include "local/vec.c"

void run_program() {
    panel chat_panel;
    connection peer = NULL;
    bool is_connected = false;
    bool is_host = false; //by default nobody is the host

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
            char port_str[456];
            textbox_text_with_id("portBox",port_str);

            unsigned int portnum = strtouint(port_str);
            if (portnum == 0L) {
                show_notice("You must enter a port NUMBER");
            } else {


                peer = connect_as_host(portnum);

                is_connected = true;
                is_host = true;
                show_notice("You are the host");

              /*  char *init_com = read_init_command(peer);
                user connected_user = get_new_user(init_com);
                vec_push(&connected_users, connected_user);*/
            }

        } else if (button_named_clicked("ConnectButton")) {
            char port_str[30] = {0};
            textbox_text_with_id("portBox",port_str);
            guitextbox hostbox = text_box_from_id("hostBox");
            char host[456];
            textbox_text_with_id("hostBox",host);


            if (strcmp(hostbox->content_string, "") == 0 || strcmp(hostbox->content_string, "Input HOST") == 0) {
                show_notice("You must enter host");
            } else  if(!username_set()) {
                show_notice("You must set your username");
            } else {

                unsigned int portnum = strtouint(port_str);
                if (portnum == 0L) {
                    show_notice("You must enter a port NUMBER");
                } else {
                    peer = connect_as_client(host, portnum);
                    send_user_details(peer);
                    show_notice("Connected");
                    is_connected = true;
                }
            }

        }

        if (button_named_clicked("SendButton")) {
            if (is_connected) {
                char message[456] = {0};
                textbox_text_with_id("messageBox",message);

                if(is_host) {
                    send_message_host(message);
                } else {
                    send_message(message, peer);
                }
            } else {
                show_notice("You have not connected yet");
            }
        }

        if (is_connected) {

            if (is_host) {//hosts will constantly accept new connections
                int con = accept_tcpconnection();
                if (con >= 1) {
                    peer = fetch_connection();
                }
                host_listen_for_message(peer);

            } else {
                listen_for_message(peer);
            }

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
