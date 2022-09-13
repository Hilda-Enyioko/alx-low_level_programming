#include "main.h"
#include <stdio.h>

/**
 * times_table - print time table
 * Return: Always 0
 */
void times_table(void)
{
  int a;
  int b;
  int c;

  for (a = 0; a <= 9; a++)
    {
      for (b = 0; b <= 9; b++)
	{
	  c = a * b;
	  _putchar(c + '0');
	  _putchar(',');
	  _putchar(' ');
	}
      _putchar('\n');
    }
}

       
