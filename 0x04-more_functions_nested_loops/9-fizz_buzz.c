#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Entry point
* Return: 0
*/
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else if ((a % 3 != 0) && (a % 5 != 0) && (a != 100))
{
printf("%i ", a);
}
else if (a == 100)
{
printf("%i", a);
}
}
return (0);
}
