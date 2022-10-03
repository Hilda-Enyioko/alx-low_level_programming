#include "main.h"
#include <stdio.h>
#include <stdlib.h>


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
* _strcat - function that concatenates two strings
* @dest: string that is appended to src strong
* @src: string that is appended to dest strong
* Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
int a;
int i;
for (i = 0; dest[i] != '\0'; i++)
{
i++;
}
for (a = 0; src[a] != '\0'; a++)
{
dest[i] = src[a];
i++;
}
return (dest);
}


/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to new string or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int size;
int size1 = _strlen(s1);
int size2 = _strlen(s2);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
p = malloc(sizeof(char) * (size1 + size2) + 1);
if (p == NULL)
{
return (NULL);
}
size = 0;
while (size <= size1 + size2)
{
p[size] = _strcat(s1, s2);
}
p[size] = '\0';
return (m);
}

