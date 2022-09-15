#include "main.h"
#include <stdio.h>

/**
* print_square - prints a square, followed by a new line
* Description: a function that prints a square, followed by a new line
* @size: size of square
* Return: Always 0
*/
void print_square(int size)
{
int a = 0;
int b;

while (a < size && size > 0)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
if (a <= 0)
_putchar('\n');
}

