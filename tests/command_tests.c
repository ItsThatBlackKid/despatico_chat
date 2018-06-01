//
// Created by sheku on 26/05/2018.
//
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <commands.h>


int main() {
    printf("Hello world\n");

    printf("%s\n", parse_command("!shout hello world"));

/*    printf("%s\n",parse_command("!shout hello world"));
    printf("%s\n",parse_command("!yell oi MATE"));
    printf("%s\n",parse_command("!whisper HeYY"));

    user me = parse_command_user("!user sheku 10.0.0.6");

    printf("username: %s ip:%s",me.username,me.ip_addr);*/

    /* char *to_filer = "fucking asshole cunt I fucking hate you bitch! mate";
     printf("before filter: %s\n",to_filer);
     char *new = filter_language(to_filer);*/

    // printf("after filter: %s", new);

    char my_message[456] = "jake:Hello fuck";
    char *new_m = filter_language(my_message);
    printf("%s\n",new_m);

    return 0;
}
