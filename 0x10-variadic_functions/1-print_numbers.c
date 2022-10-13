#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;
va_start(a, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(a, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(a);
}
