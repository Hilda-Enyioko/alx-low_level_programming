#include "main.h"

/**
* *_strcpy - copies a string from one pointer to another
* @dest: pointer receiving the copied string
* @src: pointer with the string to be copied
* Description: a function that copies a string including the terminating null byte
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
return (dest[i]);
}
