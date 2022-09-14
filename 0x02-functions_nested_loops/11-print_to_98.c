#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - prints natural numbers to 98
* @n: start printing from n
* Description: to print natural numbers to 98
* Return: Always 0
*/
void print_to_98(int n)
{
if ((n <= 97) || (n == 98))
{
for (; n <= 97; n++)
{
printf("%d", n);
printf(", ");
}
for (n == 98)
{
printf("%d", n);
if (n == 98)
{
continue;
}
}
printf("\n");
}

if (n >= 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
printf(", ");
if (n == 98)
{
printf("%d", n);
}
if (n == 98)
{
continue;
}
}
printf("\n");
}
}
