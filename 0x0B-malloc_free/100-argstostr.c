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
if (s != NULL)
{
while (s[i])
i++;
}
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
int i = 0, j = ac;
int a = 0, b = 0;
int n;
char *p;
if (ac == 0 || av == NULL)
return (NULL);

while (ac--)
a += _strlen(av[ac] + 1);
p = (char *) malloc(a + 1);
if (p == NULL)
{
return (NULL);
}
else
{
while (i < j)
{
for (n = 0; av[i][n] != '\0'; n++)
p[n + b] = av[i][n];
p[n + b] = '\n';
b += (j + 1);
i++;
}
p[b] = '\0';
}
return (p);
}
