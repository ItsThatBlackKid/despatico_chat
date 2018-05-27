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


#define MAX_PEERS 10;
#define MAX_MSG_LIM 456;

/*
 * Helper Functions and Procedures
 */

/*
 * Client Procedures/functions
 */




/*
 * Host functions/procedures
 */


void run_program() {
    panel chat_panel;
    connection peer;
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
            guitextbox portbox = text_box_from_id("portBox");

            unsigned int portnum = strtouint(portbox->content_string);
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
            guitextbox portbox = text_box_from_id("portBox");
            guitextbox hostbox = text_box_from_id("hostBox");


            if (strcmp(hostbox->content_string, "") == 0 || strcmp(hostbox->content_string, "Input HOST") == 0) {
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

                if(is_host) {
                    send_message_host(message->content_string);
                } else {
                    send_message(message->content_string, peer);
                }
            } else {
                show_notice("You have not connected yet");
            }
        }

        if (is_connected) {

            if (is_host) {//hosts will constantly accept new connections
                host_listen_for_message(peer);
                int con = accept_tcpconnection();
                if (con >= 1) {
                    peer = fetch_connection();
                    printf("new connection fetched");
                   /* char *init_com = read_init_command(peer);
                    user connected_user = get_new_user(init_com);
                    vec_push(&connected_users, connected_user);
                    update_connection_list(connected_users);*/
                }
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
