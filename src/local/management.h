//
// Created by sheku on 27/05/2018.
//

#ifndef DESPACITOCHAT_MANAGEMENT_H
#define DESPACITOCHAT_MANAGEMENT_H

#include <SwinGame.h>
#include "commands.h"
#include "helper.h"
#include "chat_types.h"

void show_notice(char notice[456]);
void show_message(char message[456]);
void show_connected_user(panel chat, user connected_user);
void show_connected_users(user_array users);

char *get_own_ip(connection self);

void sign_name(char *name, char *to_sign);

bool username_set();

bool new_user_found(user* to_add, char *name, bool is_host, char received_message[456]);

#endif //DESPACITOCHAT_MANAGEMENT_H
