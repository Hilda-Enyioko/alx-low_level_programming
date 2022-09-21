#include "main.h"
#include <stdio.h>

/**
* cap_string - function that capitalizes all words of a string
* @str: string to be tested
* Return: 0
*/
char *cap_string(char *str);
{
char *a = " \t;\n,;.!?"(){}";
int i, j, k;
for (i = 0; str[i] != '\0'; i++)
{
j = 0;
if (i == 0)
{
j = 1;
}
else
{
for (k = 0; a[k] != '\0', k++)
{
if (str(i - 1) == a[k])
{
j = 1;
break;
}
}
}
if (j == 1)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
}
return (str);
}
