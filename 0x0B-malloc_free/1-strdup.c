#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
int i;
int size = 0;
char *ptr;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
ptr = malloc(size * sizeof(*str) + 1);
if (ptr == 0)
return (NULL);
else
{
for (i = 0;i < size, i++)
{
ptr[i] = str[i];
}
}
return (ptr);
}
      
