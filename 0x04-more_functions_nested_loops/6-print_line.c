#include "main.h"
#include <stdio.h>

/**
* print_line - draws a straight line in the terminal
* Description: a function that draws a straight line in the terminal
* @n: the number of times the character _ should be printed
* Return: Always 0
*/
void print_line(int n)
{
int a = 0;
while (a < n && n > 0)
{
_putchar('_');
a++;
}
_putchar('\n');
}
