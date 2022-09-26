#include "main.h"

/**
* *_memcpy - function copies n bytes from memory area src to memory area dest
* @src: source pointer of bytes to be copied
* @dest: destination pointer of bytes to be copied
* @n: maximum bytes to copy
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n);
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
