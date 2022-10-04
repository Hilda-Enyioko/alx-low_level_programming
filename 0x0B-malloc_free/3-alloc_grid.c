#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2D array of integers
* @width: row
* @height: column
* Return: NULL or ptr to 2D array of integers
*/
int **alloc_grid(int width, int height)
{
int **ptr;
int w;
int h;
if (width <= 0)
return (NULL);
if (height <= 0)
return (NULL);
ptr = malloc(sizeof(*ptr) * height);
if (ptr == 0)
return (NULL);
if ((width > 0) && (height > 0) && (ptr != 0))
{
for (h = 0; h < height; h++)
{
ptr[h] = malloc(sizeof(**ptr) * width);
if (ptr[h] == 0)
{
while (h--)
free(ptr[h]);
free(ptr);
return (NULL);
}
for (w = 0; w < width; w++)
{
ptr[h][w] = 0;
}
}
}
return (ptr);
}

