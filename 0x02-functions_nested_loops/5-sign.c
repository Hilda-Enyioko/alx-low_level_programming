#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number to be tested
 * Description: prints the sign of a number.
 * Return: Always 0
 */
int print_sign(int n)
{
  if (n > 0)
    {
      _putchar('+');
      return (1);
    }
  else
    {
      if (n == 0)
	 {
	   _putchar('0');
	   return (0);
	 }
      else
	{
	  _putchar('-');
	  return (-1);
	}
    }
  return (0);
}
