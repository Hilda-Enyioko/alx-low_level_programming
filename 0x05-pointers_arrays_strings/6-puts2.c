#include "main.h"
#include <stdio.h>

/**
* puts2 - function that prints consecutive odd characters in a string
* @str: string to be tested
* Return: Nothing
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
