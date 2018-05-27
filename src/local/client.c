//
// Created by sheku on 27/05/2018.
//

#include "client.h"



void send_message(char message[456], connection peer) {
    show_notice("Sending message");
    send_tcpmessage(message,peer);
    show_message(message);
    show_notice("Message sent");
}

void listen_for_message(connection peer) {
    if(tcpmessage_received()) {
        printf("message received\n");
        char received_message[456];
        read_message(peer,received_message);

        char *filtered_message = filter_language(received_message);
        show_message(filtered_message);
    }
}


void send_user_details(connection client) {
    user self;
    guitextbox usernm_box = text_box_from_id("usernameBox");


    char *ip_addr = get_own_ip(client);
    char *username;
    printf("copying\n");
    strcpy_ukwn(usernm_box->content_string, &username);
    printf("copied\n");

    self.username = username;
    self.ip_addr = ip_addr;

    printf("username: %s\n", self.username);
    printf("ip: %s\n", ip_addr);


    char message[456] = {0};
    sprintf(message, "!user %s %s", self.username, self.ip_addr);
    printf("%s", message);
    exit(0);
    send_message(message, client);
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





