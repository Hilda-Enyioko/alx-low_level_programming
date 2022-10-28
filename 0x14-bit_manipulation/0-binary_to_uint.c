#include "main.h"

/**
 * rev_index - reverses the index of a string
 * and copies the value into another variable
 * @i: index of string to be reversed
 * @j: resulting index
 * Return: nothing
 */
int rev_index(int i, int j)
{
const char *b;
for (i = 0; b[i] != '\0'; i++)
 ;
 j = i;
 return (j);
}





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
  if (b[i] != '0' || b[i] != '1' || b[i] == '\0')
  return (0);
  convert = 0;
  for (i = 0; b[i] != '\0'; i++)
  {
  convert <<= 1;
  convert += b[i] - '0';
  }
  return (0);
}
