//
// Created by sheku on 24/05/2018.
//

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
        bytes[i] = (unsigned char) (ip >> (i * 8) & 0XFF);
    }
    sprintf(result, "%d.%d.%d.%d", bytes[3], bytes[2], bytes[1], bytes[0]);
}

//thank you https://gist.github.com/bg5sbk/11058000
char *_replace_substr(const char *string, const char *substr, const char *replacement) {
    char *tok = NULL;
    char *newstr = NULL;
    char *oldstr = NULL;
    int oldstr_len = 0;
    int substr_len = 0;
    int replacement_len = 0;

    newstr = strdup(string);
    substr_len = strlen(substr);
    replacement_len = strlen(replacement);

    if (substr == NULL || replacement == NULL) {
        return newstr;
    }

    while ((tok = strstr(newstr, substr))) {
        oldstr = newstr;
        oldstr_len = strlen(oldstr);
        newstr = (char *) malloc(sizeof(char) * (oldstr_len - substr_len + replacement_len + 1));

        if (newstr == NULL) {
            free(oldstr);
            return NULL;
        }

        memcpy(newstr, oldstr, tok - oldstr);
        memcpy(newstr + (tok - oldstr), replacement, (size_t) replacement_len);
        memcpy(newstr + (tok - oldstr) + replacement_len, tok + substr_len, oldstr_len - substr_len - (tok - oldstr));
        memset(newstr + oldstr_len - substr_len + replacement_len, 0, 1);

        free(oldstr);
    }


    return newstr;
}

char** permute(char *input) {

    int n = strlen(input);
    int max_perms = 1 << n;

    char *lwr = strlwr(input);
    char combinations[max_perms][sizeof(n)+1];
    char **combos = (char**) malloc((max_perms + 1) * sizeof(char *));

    for(int i = 0; i < max_perms; i++) {
        combos[i] = (char*)malloc(sizeof(input)+1);
        strcpy(combos[i],input);
        for(int j = 0; j < n; j++) {
            if(((i >> j) & 1) == 1) {
                combos[i][j] = (char) toupper(lwr[j]);
            }
        }
    }

    return combos;
}

void append_char(char *orig, char to_append) {
   size_t len = strlen(orig);
   orig[len] = to_append;
   orig[len +1] ='\0';

}

void prepend(char *to_prepend, char *orig) {
    size_t  len = strlen(to_prepend);
    size_t i;

    memmove(orig + len, orig, strlen(orig)+1);
    for(i = 0; i < len; i++) {
        orig[i] = to_prepend[i];
    }
}



char *filter_language(const char *orig) {
    //TODO all case permutations of words
    //TODO read swear words from a file. tired of hardcoding

     char *swear_words[11] = {
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

     char *result;

     char **perm = permute(swear_words[0]);
     for(int i = 0; i < (1 <<strlen(swear_words[0]));i++) {
         result = _replace_substr(orig, perm[i],"DESPACITO");
         if(strcmp(orig,result) !=0) break;
     }

    for (int i = 1; i < 10; i++) {
        char **permutation = permute(swear_words[i]);

        for(int j = 0; j < (1 << strlen(swear_words[i])); j++) {
            result = _replace_substr(result, permutation[j], "DESPACITO");
        }
    }

    return result;
}


