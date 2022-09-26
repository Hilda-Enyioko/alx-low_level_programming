#include "main.h"
#include <stdio.h>

/**
* *_strstr - locates a substring
* @haystack: string to be checked
* @needle: source string of substring
* Return: a pointer to the beginning of the located substring
* Or NULL if substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
return (s + i);
}
}
return (0);
}
