#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be tested
 * Return: square root of n OR -1 if n has no square root
 */
int _sqrt_recursion(int n)
{
return (_sqroot(n, 1));
}

/**
 * _sqroot - find square root of number
 * @n: number to be tested
 * @a: square root of n
 * Return: a or -1
 */

int _sqroot(int n, int a)
{
if (a * a < n)
{
return (_sqroot(n, a + 1));
}
else if (a * a == n)
{
return (a);
}
else
{
return (-1);
}
}
