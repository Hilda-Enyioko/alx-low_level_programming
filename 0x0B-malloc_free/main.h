#include <stdio.h>

/*function prototype*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *argstostr(int ac, char **av);
char **strtow(char *str);
