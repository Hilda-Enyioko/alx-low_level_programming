#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: string that is appended to src strong
 * @src: string that is appended to dest strong
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int a;
int i;
for (i = 0; dest[i] != '\0'; i++)
{
i++;
}
for (a = 0; src[a] != '\0'; a++)
{
dest[i] = src[a];
i++;
}
return (dest);
}
