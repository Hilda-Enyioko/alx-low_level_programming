#include <stdio.h>
#include <stdlib.h>

/**
* main - prints minimum coins to make change for an amount of money
* @argc: argument count(int)
* @argv: argument vector(string)
* Return: 0 or 1 or number of coins
*/
int main(int argc, char *argv[])
{
int cents = atoi(argv[1]);
int n = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
}
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
n += 1;
}
printf("%d\n", n);
return (0);
}
