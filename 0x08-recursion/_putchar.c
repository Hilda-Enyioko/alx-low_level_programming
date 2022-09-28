#include <stdio.h>
#include <unistd.h>

/**
 * Return: On Success 1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
