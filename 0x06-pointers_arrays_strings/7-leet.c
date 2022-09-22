#include "main.h"
#include <stdio.h>

/**
* leet - function that encodes a string into 1337
* @str: string to be tested
* Return: 0
*/
char *leet(char *str)
{
int i;
int j;
int a[];
int b[];
int c[];
a[] = "AEOTL";
b[] = "aeotl";
c[] = "43071";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == a[j] || s[i] == b[j])
{
s[i] = c[j];
break;
}
}
}
return (s);
}
