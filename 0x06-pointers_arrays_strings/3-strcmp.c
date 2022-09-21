#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: string pointer to be compared
 * @s2: string pointer to be compared
 * Return: Less than 0, 0 or Greater than 0
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != 0; i++)
{
if (s1[i] != s2[i]
{
return (s1[i] - s2[i]);
}
}
return (0);
}
