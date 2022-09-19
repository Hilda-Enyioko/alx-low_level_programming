#include "main.h"
#include <stdio.h>

/**
* rev_string - function that reverses a string
* @s: string to be reversed
* Description: a function that reverses a string
* Return: 0
*/
void rev_string(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
}
