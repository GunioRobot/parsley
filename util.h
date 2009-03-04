#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <stdio.h>
#include <json/json.h>

FILE* parsley_fopen(char*, char*);
char* sprintbuf_parsley_header(struct printbuf *);
void registerEXSLT();

int parsley_key_flags(char*);
char* parsley_key_tag(char*);
char* parsley_key_filter(char*);


#endif