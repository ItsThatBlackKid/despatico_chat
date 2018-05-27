//
// Created by sheku on 25/05/2018.
//

#include "vec.h"

#ifndef DESPACITOCHAT_CHAT_TYPES_H
typedef struct command_t {
    char *type;
    char *value;
}command;

typedef struct user_t {
    char *username;
    char *ip_addr;
} user;


typedef vec_t(user) user_array;
#define DESPACITOCHAT_CHAT_TYPES_H

#endif //DESPACITOCHAT_CHAT_TYPES_H


