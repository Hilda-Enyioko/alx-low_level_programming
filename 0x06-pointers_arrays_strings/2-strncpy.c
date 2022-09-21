#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies a string
 * @dest: destination pointer receiving string
 * @src: source pointer for the string
 * @n: number of times to copy
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
