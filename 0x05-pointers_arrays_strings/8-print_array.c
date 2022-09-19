#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_array - prints n elements of an array of integers followed by a new line
* @a: array to be printed
* @n: number of elemenrs in the array to be printed
* Description: a function that prints n elements of an array
* of integers followed by a new line
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* Return: Nothing
*/
void print_array(int *a, int n)
{
int i = 0;
while (i <= n)
{
printf("%d", a[i]);
if (i <= n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
