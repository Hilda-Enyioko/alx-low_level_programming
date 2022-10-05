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
while (s[i] != '\0')
i++;
return (i);
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
int size1;
int size2;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
p = malloc((size1 + size2) *sizeof(char)  + 1);
if (p == 0)
return (0);
for (size = 0; size <= size1 + size2; size++)
{
if (size < size1)
p[size] = s1[size];
else
p[size] = s2[size - size1];
}
p[size] = '\0';
return (p);
}

