#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string followed by a new line.
* @str: string to be printed
* Return: Nothing
*/
void puts_half(char *str)
{
int i = 0;
int a;
i++;
for (a = i + 1 / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}

_putchar('\n');
}
