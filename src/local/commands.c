//
// Created by sheku on 25/05/2018.
//

#include "commands.h"


bool message_is_command(const char *message) {
    bool is_command = false;
    char com_op = '!';
    if(com_op == message[0] && message[1]) {
        is_command = true;
    }

    return is_command;
}

//user commands are read only by the host
bool is_user_command(const char *message){
    bool is_user_command = false;
    if(message_is_command(message) && message[1] == 'u') {
        is_user_command = true;
    }

    return  is_user_command;
}

command tokenize(char* input) {
    char to_parse[456] = {0};
    strcpy(to_parse,input);
    char *pch;
    pch = strtok(to_parse, " !");

    command tokenized;
    char *type;
    strcpy_ukwn(pch,&type);
    tokenized.type = type;

    pch = strtok(NULL, "");
    char *value;
    strcpy_ukwn(pch,&value);
    tokenized.value = value;

    return tokenized;
}

user tokenise_user(char *input) {
    char to_parse[256] = {0};
    strcpy(to_parse,input);
    char *pch;
    //read the [username] part of the command
    pch = strtok(to_parse, " ");

    user parsed_user;
    char *username;

//    printf("%s",to_parse);
    strcpy_ukwn(pch, &username);
    parsed_user.username =username;

    char *ip_addr;
    //read the [ip_addr] part of the command
    pch = strtok(NULL, " ");
    strcpy_ukwn(pch,&ip_addr);


    parsed_user.ip_addr = ip_addr;

    return parsed_user;
}

void parse_shout_command(char **comm_value) {
    char *temp;
    strcpy_ukwn(*comm_value,&temp);
    strupr(temp);
    strcpy(*comm_value,temp);
}

void parse_whisper_command(char **comm_value) {
    char *temp;
    strcpy_ukwn(*comm_value,&temp);
    strlwr(temp);
    strcpy(*comm_value,temp);
}

user parse_command_user(char *input) {
    /*
     * User command syntax:
     * !user [username] [ip_addr]
     */

    command user_command = tokenize(input);
    user result =tokenise_user(user_command.value);
    return result;
}

user user_to_command(user to_convert) {
    user converted_user;

    strcpy_ukwn(to_convert.username,converted_user.username);
    strcpy_ukwn(to_convert.username,converted_user.ip_addr);

    return converted_user;
}


char *parse_command(char *input) {
    command token = tokenize(input);

    if(strcmp(token.type,"shout") == 0 || strcmp(token.type, "yell") == 0) {
        parse_shout_command(&token.value);
    } else if(strcmp(token.type, "whisper") == 0 || strcmp(token.type, "shh") == 0) {
        parse_whisper_command(&token.value);
    } else {
        return "that's not a command";
    }


    return token.value;
}

