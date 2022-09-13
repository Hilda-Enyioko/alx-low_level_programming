#include "main.h"

/**
* _islower - checks for lowercase alphabet
* Description: a function that checks for lowercase character.
* @c: letter to be tested
* Return: Always 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
