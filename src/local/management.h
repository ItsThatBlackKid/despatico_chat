//
// Created by sheku on 27/05/2018.
//

#ifndef DESPACITOCHAT_MANAGEMENT_H
#define DESPACITOCHAT_MANAGEMENT_H

#include <SwinGame.h>
#include "helper.h"
#include "chat_types.h"

void show_notice(char notice[456]);
void show_message(char message[456]);
void show_connected_users(user_array users);

char *get_ip_str(uint32_t ip_dec);
char *get_own_ip(connection self);
char *get_user_ip(int user_index);
char *get_user_details(user user_detail);

void sign_name(char *name, char *to_sign);

#endif //DESPACITOCHAT_MANAGEMENT_H
