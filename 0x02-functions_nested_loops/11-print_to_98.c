#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - prints natural numbers to 98
* @n: number to be tested
* Return: Always 0
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (;n <= 98; n++)
{
printf("%d", n);
printf(", ");
}
printf("\n");
}
if (n >= 98)
{
for (;n >= 98; n--)
{
printf("%d", n);
printf(", ");
if (n == 98)
{
continue;
}
}
printf("\n");
}
printf("\n");
}
