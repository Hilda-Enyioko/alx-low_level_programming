#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
int hr;
int min;

for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
_putchar(hr / 10 + '0');
_putchar(hr % 10 + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min % 10 + '0');
_putchar('\n');
}
}
}
	 	 
