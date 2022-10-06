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
void *ptr = malloc(b);
if (ptr == 0)
exit(98);
return (ptr);
}
