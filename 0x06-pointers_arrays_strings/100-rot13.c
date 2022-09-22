#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes a string using rot13
* @str: string to be tested
* Return: Encode str
*/
char *rot13(char *str)
{
int i;
int j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
break;
}
}
}
return (str);
}
