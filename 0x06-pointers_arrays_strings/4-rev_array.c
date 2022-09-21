#include <stdio.h>
#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array of integers
* @n: number of elements in the array
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
int i = 0;
int j;
for (j = n / 2; j > 0; j--, i++)
{
a[n - i - 1] +=  a[i];
a[i] = a[n - i - 1] - a[i];
a[n - i - 1] = a[n - i -1] - a[i];
}
}
