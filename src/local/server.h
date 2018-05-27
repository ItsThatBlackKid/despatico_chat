//
// Created by sheku on 27/05/2018.
//

#ifndef DESPACITOCHAT_SERVER_H
#define DESPACITOCHAT_SERVER_H

#include "management.h"
#include "helper.h"
#include "commands.h"
#include "SwinGame.h"

void send_message_host(char message[456]);
void listen_for_command(connection sock);
void host_listen_for_message(connection peer);
connection connect_as_host(int port);

user get_new_user_details(char message[456]);

#endif //DESPACITOCHAT_SERVER_H
