#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function that prints the length of a string
 * @s: char pinter that oiints to the char string
 * Description: a function that returns the length of a string
 * Return: 0
 */
unsigned int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}


/**
 * *string_nconcat - concatenates two strings
 * @s1: head string
 * @s2: tail string
 * @n: concatenate n bytes of s2
 * Return: ptr to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
unsigned int i, j;
char *ptr;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
a = _strlen(s1);
b = _strlen(s2);
if (n < b)
ptr = malloc(a + n * sizeof(char) + 1);
else
ptr = malloc(a + b + 1);
if (ptr == 0)
return (0);
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < n; j++, i++)
ptr[i] = s2[j];
ptr[i] = '\0';
return (ptr);
}


