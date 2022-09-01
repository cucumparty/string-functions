#include "file.h"
#define ggg fprintf(stdout, "%d\n", __LINE__);

int main()
{
    FILE* fp = NULL;
    const char* s = "apple";
    const char* t = "apple";
    
    char p[] = "orange";

    char c = 's';
    int n = 4;
    char* line = (char*) calloc(n, sizeof(char));
    char s1[20] = "hello";


    //int r_puts_out = r_puts(s);             //Что значит ошибка?
    //printf("%d\n", r_puts_out);

    int r_strcmp_out = r_strcmp(s, t);
    //printf("%d\n", r_strcmp_out);

    int r_strlen_out = r_strlen(s);
    //printf("%d\n", r_strlen_out);

    char* r_strchr_out = r_strchr(c, s);
    //printf("%p\n", r_strchr_out);

    char* r_strcpy_out = r_strcpy(p, s);
    //printf("%p\n", r_strcpy_out);
    //printf("%s", p);

    //char* r_strncpy_out = r_strncpy(p, s, n);
    //printf("%p\n", r_strncpy_out);

    if((fp = fopen("text.txt", "r")) == NULL)
    {
        printf("The file can't be opened.");
        return EXIT_FAILURE;
    }

    //char* r_fgets_out = r_fgets(line, n, fp);
    //printf("%d\n", r_strlen(line));
    //printf("%s", line);

    if(fclose(fp) != 0)
        printf("Error by closing the file");

    free(line);

    //char* r_strcat_out = r_strcat(s1, t);
    //printf("%s", s1);

    char* r_strncat_out = r_strncat(s1, t, n);
    //printf("%s", s1);

    char* r_strdup_out = r_strdup(s);
    printf("%s\n", r_strdup_out);

    free(r_strdup_out);


    return 0;
}