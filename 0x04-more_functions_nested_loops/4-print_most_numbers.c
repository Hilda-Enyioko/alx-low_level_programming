#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers 0-9, except 2 and 4
 * Description: a function to print numbers 0-9, except 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if ((n != 2) && (n != 4))
{
_putchar(n + '0');
}
}
_putchar('\n');
}
