//
// Created by sheku on 27/05/2018.
//

#ifndef DESPACITOCHAT_CLIENT_H
#define DESPACITOCHAT_CLIENT_H

#include "management.h"
#include "helper.h"
#include "commands.h"
#include "SwinGame.h"

void send_message(char message[456],connection peer);
void send_user_details(connection client);
void listen_for_message(connection peer);
user get_new_user(char *message);
connection connect_as_client(char *host, int port);



#endif //DESPACITOCHAT_CLIENT_H
