#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: number to be added
 * @b: number to be added
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
  return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
  return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: number to be multiplied
 * @b: number to be multiplied
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
  return (a * b);
}
/**
 * op_div - returns the result of a divided by b
 * @a: the divisdend
 * @b: the divisor
 * Return: the result of the division of a by b
 */
int op_div(int a, int b)
{
  return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the dividend
 * @b: the divisor
 * Return: the result of the division of a by b
 */
int op_mod(int a, int b)
{
  return (a % b);
}
