#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits(0-9)
 * @c: character to be tested
 * Description: A function that checks for digits(0-9)
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
