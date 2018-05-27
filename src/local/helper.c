//
// Created by sheku on 24/05/2018.
//
#include <ctype.h>
#include <stdlib.h>
#include <mem.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "helper.h"

unsigned int strtouint(char *st) {
    char *x;
    for (x = st; *x; x++) {
        if (!isdigit(*x)) {
            return 0L;
        }
    }

    return (strtoul(st, NULL, 10));
}


/**
 * C forces me resize my strings and I got tired of writing the same shit over and over.
 * @param src - the source string.
 * @param dest - the string to which we wish to copy to.
 *
 */
void strcpy_ukwn(char *src, char **dest) {
    *dest = (char *) malloc(strlen(src) + 1);
    strcpy(*dest, src);
}

void strcpy_kwn(char *src, char **dest) {
    *dest = (char *) realloc(*dest, strlen(src) + 1);
    strcpy(*dest, src);
}

void int_to_ip(uint32_t ip, char *result) {

    unsigned char bytes[4];

    for (int i = 0; i < 4; i++) {
        bytes[i] = (ip >> (i * 8) & 0XFF);
    }
    sprintf(result, "%d.%d.%d.%d", bytes[3], bytes[2], bytes[1], bytes[0]);
}

char *multi_tok(char *input, char *delimiter) {
     char *string;
    if (input != NULL) {
        string = input;
        printf("%s\n",string);
    }


    if (string == NULL)
        return string;

    char *val = strstr(string, delimiter);
    printf("val: %s\n",val);
    if (val == NULL) {
        char *temp = string;
        string = NULL;
        return temp;
    }


    *val = '\0';
    string = val + strlen(delimiter);
    char *temp = string;
    return temp;
}

//thank you https://gist.github.com/bg5sbk/11058000
char* _replace_substr(const char* string, const char* substr, const char* replacement) {
    char* tok = NULL;
    char* newstr = NULL;
    char* oldstr = NULL;
    int   oldstr_len = 0;
    int   substr_len = 0;
    int   replacement_len = 0;

    newstr = strdup(string);
    substr_len = strlen(substr);
    replacement_len = strlen(replacement);

    if (substr == NULL || replacement == NULL) {
        return newstr;
    }

    while ((tok = strstr(newstr, substr))) {
        oldstr = newstr;
        oldstr_len = strlen(oldstr);
        newstr = (char*)malloc(sizeof(char) * (oldstr_len - substr_len + replacement_len + 1));

        if (newstr == NULL) {
            free(oldstr);
            return NULL;
        }

        memcpy(newstr, oldstr, tok - oldstr);
        memcpy(newstr + (tok - oldstr), replacement, replacement_len);
        memcpy(newstr + (tok - oldstr) + replacement_len, tok + substr_len, oldstr_len - substr_len - (tok - oldstr));
        memset(newstr + oldstr_len - substr_len + replacement_len, 0, 1);

        free(oldstr);
    }

    free(string);

    return newstr;
}

char **permute(char * input) {
    int n = strlen(input);
    int max_perms = 1 <<n;

    char *lwr =strlwr(input);
    char **combinations = malloc(max_perms * sizeof(char*));
    printf("size: %d", sizeof(combinations));
    for(int i = 0; i < max_perms; i++) {
        combinations[i] = malloc(strlen(lwr) +1);
        for(int j = 0; j <n; j++) {
            if(((i >>j) &1) == 1)combinations[i][j] = toupper(lwr);
        }
        printf("%s", combinations[i]);
    }

    free(&n);
    free(&max_perms);

    return combinations;
}

char *filter_language(const char *orig) {
  const  char *swear_words[11] = {
            "asshole",
            "bitch",
            "cunt",
            "fuck",
            "nigga",
            "nigger",
            "whore",
            "cock",
            "pussy",
            "fag",
            "bastard",
    };

    char *result = _replace_substr(orig,swear_words[0],"DESPACITO");

    for(int i = 1; i < 10; i++) {
        int permutations = 1 <<strlen(swear_words[i]);
        char **perm = permute(swear_words[i]);
//        for(int j = 0; j <permutations; j++) {
//            perm[i] =
//            result = _replace_substr(result,swear_words[i],"DESPACITO");
//        }
    }

    return result;
}


