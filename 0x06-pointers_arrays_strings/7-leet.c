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
int a[] = "AEOTL";
int b[] = "aeotl";
int c[] = "43071";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == a[j] || str[i] == b[j])
{
str[i] = c[j];
}
}
}
return (str);
}
