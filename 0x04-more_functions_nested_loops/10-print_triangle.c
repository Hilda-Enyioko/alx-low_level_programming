#include "main.h"
#include <stdio.h>

/**
* print_triangle - prints a triangle, followed by a line
* @size: size of triangle
* Description: a function that prints a triangle, followed by a line
* Return: 0
*/
void print_triangle(int size)
{
int a = 0;
int b;
int c;

while (a < size && size > 0)
{
b = 0;
while (b < size - a)
{
_putchar(' ');
b++;
}
c = 0;
while (c < a)
{
_putchar('#');
c++;
}
_putchar('\n');
a++;
}
if (i <= 0)
_putchar('\n');
}
