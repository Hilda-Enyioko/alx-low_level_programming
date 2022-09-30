#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @s: string to be printed
 * Description: a function that prints a string, followed by a new line
 * Return: 0
 */
void _puts(char *s)
{
  int i;
  for (i = 0; s[i]; i++)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}
