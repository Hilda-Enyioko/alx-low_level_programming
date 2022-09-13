#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @a: initial number
 * Return: Always 0
 */
int print_last_digit(int a)
{
int n = a % 10;

if (a < 0)
{
n = -n;
}
_putchar(n + '0');

return (n);
}
