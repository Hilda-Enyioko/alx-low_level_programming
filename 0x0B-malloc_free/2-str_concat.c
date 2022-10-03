#include "main.h"
#include <stdio.h>
#include <main.h>

/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to new string or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int i, size1, size2;
int mid;
if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
for (size1 = 0; s1[size1] != '\0'; size1++)
;
for (size2 = 0; s2[size2] != '\0'; size2++)
;
p = malloc(sizeof(char * (size1 + size2 + 1));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < 1; i++)
{
p[i] = s1[i];
}
mid = size2;
for (size2 = 0; size2 <= mid; size2++, i++)
{
p[i] = s2[i]
}
return (p);
}
