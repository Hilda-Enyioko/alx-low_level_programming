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
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
for (; i < n; i++;)
{
dest[i] = '\0';
}
return (dest);
}
