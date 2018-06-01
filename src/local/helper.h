//
// Created by sheku on 24/05/2018.
//

#ifndef _HELPER_H
#define _HELPER_H
#include <ctype.h>
#include <stdlib.h>
#include <mem.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

unsigned int strtouint(char *string);

void strcpy_ukwn(char *src, char **dest);

void strcpy_kwn(char *src, char **dest);

void int_to_ip(uint32_t ip, char *result);

char** permute(char *input);

void append_char(char *orig, char to_append);

void prepend(char *to_prepend, char *orig);


char *filter_language(const char *orig);
#endif



