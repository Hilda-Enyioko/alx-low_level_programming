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
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: char
 * Return: a pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
int i, j = 0;
int a, b = 0;
char *p;
for (i = 0; i < ac; i++, j++)
j += _strlen(av[i]);
p = malloc(sizeof(char) * j + 1);
if (ac == 0 || av == NULL || p == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
for (a = 0; av[i][j] != '\0'; a++, b++)
p[b] = av[i][j];
p[b] = '\n';
b++;
}
p[b] = '\0';
return (p);
}
