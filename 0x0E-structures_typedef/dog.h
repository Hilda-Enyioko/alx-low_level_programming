#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure def of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
char *name;
char *owner;
float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
