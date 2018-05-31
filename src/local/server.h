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
void host_listen_for_message(connection peer);
connection connect_as_host(int port);
#endif //DESPACITOCHAT_SERVER_H
