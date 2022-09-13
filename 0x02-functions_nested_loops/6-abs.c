#include "main.h"
#include <stdio.h>

/**
* _abs - prints absolute value of a number
* Description: function that computes the absolute value of an integer
* @n: number to be tested
* Return: Always 0
*/
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
return (0);
}
