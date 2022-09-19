#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Description: a function that swaps the values of two integers.
 * Return: 0
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}