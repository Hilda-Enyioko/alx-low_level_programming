#include "main.h"

/**
* *_strcpy - copies a string from one pointer to another
* @dest: pointer receiving the copied string
* @src: pointer with the string to be copied
* Description: a function that copies a string including the terminating byte
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do
{
i++;
dest[i] = src[i];
}
while (src[i] != '\0')
return (dest);
}
