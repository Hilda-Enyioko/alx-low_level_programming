#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count(int)
* @argv: argument vector(array)
* Return: 0 or 1
*/
int main(int argc, char const *argv[])
{
int a = atoi(argv[1]) * atoi(argv[2]);
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", a);
return (0);
}
