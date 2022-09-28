#include "main.h"
#include <stdio.h>

/**
* is_palindrome - returns 1 if a string is a palindrome, else 0
* @s: string to be tested
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
int end = _strlen_recursion(s);
return (check_palindrome(s, 0, end - 1, end % 2)

/**
* check_palindrome - checks for the palindrome
* @s: string to be tested
* @start: s string from left to right
* @end: s string from right to left
* @p: int
*/
int check_palindrome (char *s, int start, int end, int p)
{
if ((start == end && pair != 0) || (start == end + 1 && p == 0))
{
return(1);
}
else if (s[start] != s[end])
{
return(0);
}
else
{
return (check_palindrome (s, start, end, p);
}
}
