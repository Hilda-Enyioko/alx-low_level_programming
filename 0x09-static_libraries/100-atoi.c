#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string(char type)
 * Return: integer converted
 */
int _atoi(char *s)
{
int a = 1, b = 0, c;
for (c = 0; s[c] >= 48 && s[c] <= 57; c++)
{
if (s[c] == '-')
{
a *= -1;
}
}
for (int i = c; s[i] >= 48 && s[i] <= 57; i++)
{
b *= 10;
b += (s[i] - 48);
}
return (a * b);
}

 
  
