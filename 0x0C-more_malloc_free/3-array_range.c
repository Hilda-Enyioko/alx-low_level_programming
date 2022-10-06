#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum element
 * @max: maximum element
 * Return: ptr to newly created array or NULL
 */
int *array_range(int min, int max)
{
int *ptr;
int a;
if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == 0)
return (0);
for (a = 0; ptr[a] != '\0' && min + a <= max; a++)
ptr[a] = min + a;
return (ptr);
}
