#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string followed by a new line.
* @str: string to be printed
* Return: Nothing
*/
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
int a;
for (a = i / 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
