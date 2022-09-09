#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: Prints alphabet in lowercase, except q and e
* Return: 0
*/
int main(void)
{
char a;
char q = 'q';
char e = 'e';
for (a = 'a'; a <= 'z'; a++)
{
if (a != q && a != e)
{
putchar(a);
}
}
putchar('\n');
return (0);
}
