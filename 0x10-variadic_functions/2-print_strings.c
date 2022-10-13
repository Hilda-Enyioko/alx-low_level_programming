#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;
char *str;
va_start(a, n);
for (i = 0; i < n; i++)
{
str = va_arg(a, char*);
if (str)
printf("%s", str);
else
printf("nil");
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(a);
}
