//
// Created by sheku on 27/05/2018.
//
#include "server.h"
void send_message_host(char message[456]) {
    show_notice("Sending message");
    broadcast_tcpmessage(message);
    show_message(message);

    show_notice("Message Sent");
}

void relay_message(char *message) {
    if(accept_tcpconnection() >1) {
        broadcast_tcpmessage(message);
    }
}

void listen_for_command(connection sock) {
    if (tcpmessage_received()) {
        char received_message[456];
        read_message(sock, received_message);
        if (message_is_command(received_message)) {
            char *message_by_user;
            parse_command(received_message);
        }
    }
}

void host_listen_for_message(connection peer) {
    char received_message[456];
    if(tcpmessage_received()) {
        printf("message received\n");
        read_message(peer,received_message);
        if(message_is_command(received_message)) {
            printf("command received\n");
            char *com_val = parse_command(received_message);
            show_message(com_val);
            relay_message(com_val);
        } else {
            printf("message received\n");
            show_message(received_message);
            relay_message(received_message);
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

user get_new_user(char message[456]) {
    user result;
    if (is_user_command(message)) {
        result = parse_command_user(message);
    }

    return result;
}

void broadcast_new_user(connection host, user new_user) {

}