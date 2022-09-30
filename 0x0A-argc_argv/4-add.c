#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* check_integer: checks if a is an integer
* @s: string to check
* Return: 0 or 1
*/
int check_integer(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] < '0' || a[i] > '9')
return (1);
i++;
}
return (0);
}


/**
* main - adds positive numbers
* @argc: argument count(int)
* @argv: argument vector(array)
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int sum;
sum = 0;
while (--argc)
{
if (check_integer(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
printf("%i\n", sum);
return (0);
}
