#include "main.h"
#include <stdio.h>

/**
* print_number - a function that prints an integer
* @n: integer to be printed
* Return: Nothing
*/
void print_number(int n)
{
int a, b, c;
if (n < 0)
{
_putchar('-');
a = n * -1;
}
else
{
a = n;
}
c = 1;
for (b = a; b > 9;)
{
b /= 10;
c *= 10;
}
for (; c > 1; c /= 10)
{
_putchar((a / c) % 10) + 48);
}
}
