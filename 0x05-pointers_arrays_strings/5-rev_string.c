#include "main.h"
#include <stdio.h>

/**
* rev_string - function that reverses a string
* @s: string to be reversed
* Description: a function that reverses a string
* Return: 0
*/
void rev_string(char *s)
{
int i;
int a;
int b;
char c;
for (a = 0; s[a] != '\0'; a++)
;
i = 0;
b = a / 2;
while (b--)
{
c = s[a - i - 1];
s[a - i - 1] = s[i];
s[i] = c;
}
}
