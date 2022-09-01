#include "file.h"
#define ggg fprintf(stdout, "%d\n", __LINE__);


int r_puts(const char* s)
{
    if (s == NULL)
        return EOF;

    while((*s) != '\0')
    {
        putchar(*s);
        ++s;
    }
    putchar('\n');
    return 1;
}

int r_strcmp(const char* s, const char* t)
{
    while((*s) != '\0' || (*t) != '\0')
    {
        if (*s == *t)
        {
            ++s;
            ++t;
            continue;
        }
        break;
    }
    return (*s - *t);
}

int r_strlen(const char* s)
{
    int i = 0;
    while((*s) != '\0')
    {
        ++i;
        ++s;
    }
    return i;
}

char* r_strchr(char c, const char* s)
{
    while(*s != '\0')
    {
        if(c == *s)
           return (char*) s;
        else
            ++s; 
    }

    return NULL;
}

char* r_strcpy(char* p,const char* s)
{
    char* pointer_to_first = p;

    while(*p == *s)
    {
        ++p;
        ++s;
    }

    return pointer_to_first;
}

char* r_strncpy(char* p, const char* s, int n)
{
    char* pointer_to_first = p;
    int i = 0;
    int len = r_strlen(p);

    for(i = 0; i < n; i++)
    {
        *p++ = *s++;
    }

    if(len > n)
    {
        while(*p != '\0')
        {
            *p  = '\0';
            p++;
        }
    }

    return pointer_to_first;
}

char* r_fgets(char* line, int size, FILE* fp)
{
    int i = 0;
    char* pointer_to_line = line;

    for(i = 1; i < size; i++)
    {
        *line = fgetc(fp);

        if(*line == EOF)
                return NULL;

        if(*line != '\n' || *line == EOF)
        {
            ++line;
        }
        else
            break;
    } 

    *line = '\0'; 
    return pointer_to_line;
}

char* r_strcat(char* s1, const char* s)
{
    int i = 0;
    char* end_s1 = s1 + r_strlen(s1);
    int len = r_strlen(s);
    for(i = 0; i < len; i++)
    {
        *end_s1++ = *s++;
    }
    *end_s1 = '\0';
    return s1;
}


char* r_strncat(char* s1, const char* s, size_t n)
{
    int i = 0;
    char* end_s1 = s1 + r_strlen(s1);

    for(i = 0; i < n; i++)
    {
        *end_s1++ = *s++;
    }
    *end_s1 = '\0';
    return s1;        
}

char* r_strdup(const char* s)
{
    int len = r_strlen(s);
    char* s_copy = (char*) calloc(len + 1, sizeof(char));
    
    if (s_copy)
        return NULL;
        
    int i = 0;
    for(i = 0; i < len; i++)
    {
        s_copy[i] = s[i];
    }
    s_copy[len] = '\0';
    return (s_copy); 
}

