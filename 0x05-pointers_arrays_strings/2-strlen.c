#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that prints the length of a string
 * @s: char pinter that oiints to the char string
 * Description: a function that returns the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
  int i = 0;
  while (s[i])
  i++;
    return (i);
}
