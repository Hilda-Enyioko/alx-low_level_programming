#include "dog.h"
#include <stdio.h>

/**
 * print_dog: prints structure dog
 * @d: struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d = NULL)
printf("");
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n",
d->name != NULL ? d->name : "(nil)",
d->age != NULL ? d->age : "(nil)",
d->owner != NULL ? d->owner : "(nil)");
}
}
