#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: number to be tested
 * Return: Always 0
 */
int print_last_digit(int n)
{
  n = n % 10;

  if (n < 0)
    {
      n = -n;
      _putchar(n);
    }
      return (n);
}

  
