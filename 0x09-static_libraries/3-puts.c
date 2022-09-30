#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string to be printed
 * Description: a function that prints a string, followed by a new line
 * Return: 0
 */
void _puts(char *str)
{
  int i;
  for (i = 0; str[i]; i++)
    {
      _putchar(str[i]);
    }
  _putchar('\n');
}
