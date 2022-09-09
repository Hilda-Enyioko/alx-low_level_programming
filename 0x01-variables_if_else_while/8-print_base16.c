#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: prints all the numbers of base 16 in lowercase
* Return: Always 0
*/
int main(void)
{
int i;
  
for (i = 48; i < 58; i++) 
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n'); 
return (0); 
}
