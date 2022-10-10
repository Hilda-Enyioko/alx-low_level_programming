#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new data structure for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int len_name, len_owner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
len_name = _strlen(name);
new_dog->name = malloc(sizeof(char) * len_name + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
len_owner = _strlen(owner);
new_dog->owner = malloc(sizeof(char) * len_owner + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}

/**
 * _strlen - a function that prints the length of a string
 * @s: char pinter that oiints to the char string
 * Description: a function that returns the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}

/**
* *_strcpy - copies a string from one pointer to another
* @dest: pointer receiving the copied string
* @src: pointer with the string to be copied
* Description: a function that copies a string including the terminating byte
* Return: 0
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}

