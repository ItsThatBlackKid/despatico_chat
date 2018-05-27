//
// Created by sheku on 24/05/2018.
//

#ifndef _HELPER_H
#define _HELPER_H

#include <stdint.h>

unsigned int strtouint(char *string);

void strcpy_ukwn(char *src, char **dest);

void strcpy_kwn(char *src, char **dest);

void int_to_ip(uint32_t ip, char *result);

char *multi_tok(char *input, char *delimiter);

char *filter_language(const char *orig);
#endif



