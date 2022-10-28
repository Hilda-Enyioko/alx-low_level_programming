#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number
 * or 0 if b is NULL or one or more of the chars in string b
 * is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
  int i;
  unsigned int convert;
i = 0;
  if (b[i] != '0' || b[i] != '1' || b[i] == '\0')
  return (0);
  convert = 0;
  for (; b[i] != '\0'; i++)
  {
  convert <<= 1;
  convert += b[i] - '0';
  }
  return (convert);
}
