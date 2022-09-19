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
i = 0;
while (str[i])
{
i++;
}

int a = (i / 2);
for (i = a; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
