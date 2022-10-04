#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts the number of words in a string
 * @s: string to be counted
 * Return: mumber of words 
 */
int count_word(char *s)
{
int a, b, c;
a = 0;
c = 0;
for (b = 0; s[b] != '\0'; b++)
{
if (s[b] == ' ')
a = 0;
else if (a == 0)
{
a = 1;
c++;
}
}
return (c);
}

/**
 * **strtow - splits a string into words
 * str: string to be tested
 * Return: pointer to array of strings(words) or NULL
 */
char **strtow(char *str)
{
char **ptr1, *ptr2; 
int i, k = 0, len = 0, words, c = 0, start, end; 
while (*(str + len))
len++;
words = count_word(str); 
if (words == 0)
return (NULL);
ptr1 = (char **)malloc(sizeof(char *) * (words + 1));
if (ptr1 == NULL)
return (NULL); 
for (i = 0; i <=len; i++)
{
if (str[i] == ' '|| str[i] == '\0')
{
if (c)
{ 
end = i;
ptr2 = (char *)malloc(sizeof(char) * (c + 1));
if (ptr2 == NULL)
return (NULL); 
while (start < end)
*ptr2++ = str[start++];
*ptr2 = '\0';
ptr1[k] = ptr2 - c;
k++;
c = 0;
}
}
else if (c++ == 0) 
start = 1;
} 
ptr1[k] = NULL; 
return (ptr1);
}
