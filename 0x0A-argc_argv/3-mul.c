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
(void)argc;
if (argc == 3)
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
printf("Error\n");
return (1);
}
