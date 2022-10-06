#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to put constant bytes
 * @b: the constant byte
 * @n: maximum bytes to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}


/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array(int type)
 * @size: size of array
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == 0)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
