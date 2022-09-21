#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: source pointer to be appended to dest
 * @dest: destination pointer to be appended to src
 * @n: number of bytes _strncat uses from src
 * Return: Void
 */
char *_strncat(char *dest, char *src, int n)
{
  int a;
  int i;
  for (i = 0; *(dest + i) != '\0'; i++)
    {
      i++;
    }
  for (a = 0; a < n; a++)
    {
     *(dest + i) = *(src + a);
      i++;

      if  (*(src + a) == '\0')     
	  break;
      a++;
      i++;
    }
  return (dest);
}
