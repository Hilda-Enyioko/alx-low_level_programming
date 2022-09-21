#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: source pointer to be appended to dest
 * @dest: destination pointer to be appended to src
 * @n: number of bytes _strncat uses from src
 * Return: Void
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int i = 0;
while (dest[i] != '\0')
{
i++;
}
while (a < n && src[a] != '\0')
{
dest[i] = src[a];
a++;
i++;
}
return (dest);
}
