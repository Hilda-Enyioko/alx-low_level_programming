#include "main.h"
#include <stdio.h>

/**
* print_diagonal - draws a diagonal line on the terminal
* Description: a function that draws a diagonal line on the terminal
* @n: number of times \ is printed
* Return: Always 0
*/
void print_diagonal(int n)
{
int a = 0;
int b;

while (a < n && n > 0)
{
b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
_putchar('\n');
a++;
}

