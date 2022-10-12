#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to the print specification function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
