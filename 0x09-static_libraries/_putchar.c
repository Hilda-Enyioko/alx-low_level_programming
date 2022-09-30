#include <unistd.h>

/**
 * _putchar - prints a character std out
 * @c: character to be printed
 * Return: On Success 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
