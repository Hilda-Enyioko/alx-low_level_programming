#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure def of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
