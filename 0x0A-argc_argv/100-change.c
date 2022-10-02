#include <stdio.h>
#include <stdlib.h>

/**
* isInteger - checks for integers
* @s: string to be tested
* Return: 0 or 1
*/
int isInteger(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] '9')
{
return (0);
i++;
}
return (1);
}



/**
* main - prints minimum coins to make change for an amount of money
* @argc: argument count(int)
* @argv: argument vector(string)
* Return: 0 or 1 or number of coins
*/
int main(int argc, char const *argv[])
{
int i = 0;
int n = 0;
int coinUsed = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (isInteger(argv[1]))
{
i = atoi(argv[1]);
while (i > 0 && n <= 4)
{
if (i >= coins[n])
{
i -= coins[n];
coinUsed++;
}
else
{
coin++;
}
}
}
printf ("%i\n", coinUsed);
return (0);
}
