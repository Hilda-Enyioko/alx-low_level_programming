#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: pointer containing prefix substring
* @accept: source pointer of substring
* Return: number of bytes, int
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, k;
k = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
}
return (k);
}
