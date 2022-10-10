#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
free((*d).name);
free((*d).owner);
free(d);
}
