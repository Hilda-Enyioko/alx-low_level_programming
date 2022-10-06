#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory to be allocated(in bytes)
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr = NULL)
return (98);
else
return (ptr);
}
