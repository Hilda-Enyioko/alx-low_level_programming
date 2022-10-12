#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to search function
 * Return: index of the first element
 * OR -1 if no element matches(or size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if ((size > 0) && (cmp(array[i])))
return (i);
/*if no element matches*/
return (-1);
}
