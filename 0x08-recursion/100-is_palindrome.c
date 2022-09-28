#include "main.h"
#include <stdio.h>

/**
* string_end - returns the last index of a string
* @s: string to be tested
* Return: int
*/
int string_end(char *s)
{
int n = 0;
if (*s > '\0')
n += string_end(s + 1) + 1;
return (n);
}

/**
* is_palindrome - returns 1 if a string is a palindrome, else 0
* @s: string to be tested
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
int end = string_end(s);
return (check_palindrome(s, 0, end - 1, end % 2));
}

/**
* check_palindrome - checks for the palindrome
* @s: string to be tested
* @start: s string from left to right
* @end: s string from right to left
* @p: int
* Return: 0 or 1
*/
int check_palindrome(char *s, int start, int end, int p)
{
if ((start == end && p != 0) || (start == end + 1 && p == 0))
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (check_palindrome(s, start + 1, end - 1, p));
}
}
