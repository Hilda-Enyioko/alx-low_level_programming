#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of to functions
 * @size: soze of the array
 * @action: pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
