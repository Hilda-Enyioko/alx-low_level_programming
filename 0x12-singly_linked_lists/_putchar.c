#include <unistd.h>

/**
 * _putchar - writes a single character to stdout
 * @c: character to be printed/ written
 * Return: on success 1
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
