#ifndef FILE_H
#define FILE_H 
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int r_puts(const char* s);

int r_strcmp(const char* s, const char* t);

int r_strlen(const char* s);

char* r_strchr(char c, const char*s);

char* r_strcpy(char* p,const char* s);

char* r_strncpy(char* p, const char* s, int n);

char* r_fgets(char* line, int size, FILE* fp);

char* r_strcat(char* s1, const char* s);

char* r_strncat(char* s1, const char* s, size_t n);

char* r_strdup(const char* s);

#endif