#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: Prints the alphabet in lowercase
* Return: Always 0
*/
int main(void)
{
char a;
a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
