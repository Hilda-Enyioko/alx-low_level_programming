#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list a;
unsigned int i, j, k;
char *str;
const char arg_types[] = "cifs";
k = 0;
va_start(a, format);
i = 0;
while (format && format[i])
{
j = 0;
while (arg_types[j])
{
if (format[i] == arg_types[j] && k)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(a, int)), k = 1;
break;
case 'i':
printf("%d", va_arg(a, int)), k = 1;
break;
case 'f':
printf("%f", va_arg(a, double)), k = 1;
break;
case 's':
str = va_arg(a, char*), k = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} i++;
}
printf("\n");
va_end(a);
}
