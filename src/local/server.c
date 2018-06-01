//
// Created by sheku on 27/05/2018.
//
#include "server.h"

void send_message_host(char message[456]) {
    show_notice("Sending message");
    if(message_is_command(message)) {
        char *com_val = parse_command(message);
        show_message(com_val);
        broadcast_tcpmessage(com_val);
    } else {
        broadcast_tcpmessage(message);
        show_message(message);
    }
    show_notice("Message Sent");

}

void relay_message(char *message) {
    if (accept_tcpconnection() > 1) {
        broadcast_tcpmessage(message);
    }
}


void host_listen_for_message(connection peer) {
    char received_message[456];
    if (tcpmessage_received()) {
        read_message(peer, received_message);
     if (is_user_command(received_message)) {
            //read the user, broadcast
            user parsed = parse_command_user(received_message);
            panel m_pane = load_panel("ChatArea.txt");
            show_connected_user(m_pane, parsed);
            broadcast_tcpmessage(received_message);

        } else {
            show_message(received_message);
            broadcast_tcpmessage(received_message);
        }

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



