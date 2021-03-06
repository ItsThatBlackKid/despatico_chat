//
// Created by sheku on 25/05/2018.
//


#ifndef _COMMANDS_H
#define _COMMANDS_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "helper.h"
#include <ctype.h>
#include "chat_types.h"

bool message_is_command(const char* message);
bool is_user_command(const char *message);

command tokenize(char *input);

user parse_command_user(char *input);

char* user_to_command(user to_conert);

char *parse_command(char *input);


#endif //DESPACITOCHAT_COMMANDS_H




