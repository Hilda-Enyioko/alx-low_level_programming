#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
  int i;
  int size;
  char *ptr = malloc(size * (sizeof(*str)) + 1);
  if (str == NULL)
    return (NULL);
  while (str[size] != '\0')
    {
      size++;
    }
  if (ptr == 0)
    {
      return (NULL);
    }
  else
    {
      while (i < size)
	{
	  ptr[i] = str[i];
	  i++;
	}
    }
      return (ptr);
}
      
