#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to put constant bytes
 * @b: the constant byte
 * @n: maximum bytes to be filled
 * Return: s
 */
char *memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
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
return (0);
memset(m, 0, nmemb * size);
return (ptr);
}
