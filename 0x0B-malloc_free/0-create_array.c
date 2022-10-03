#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array(int)
 * @c: array(char)
 * Return: ptr to the array or NULL(if it fails)
 */
char *create_array(unsigned int size, char c)
{
  int i = size;
  char *p = malloc(i);
  if (i == 0)
    {
      return (0);
    }
  while (i--)
    {
      p[i] = c;
    }
  return (p);
}
