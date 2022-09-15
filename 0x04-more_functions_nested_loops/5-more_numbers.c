#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: a function that prints 10 times 0-14
 * Return: Always 0
 */
void more_numbers(void)
{
int a;
for (a = 1; a <= 10; a++)
{
int b;
int c;
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
b = c;
c = b % 10;
_putchar('1');
_putchar(c + '0');
}
else
}
_putchar(b + '0');
}
}
_putchar('\n');
}
}
