#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: argument count(int)
* @argv: argument vector(array)
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
(void)argc;
int a;
a = atoi(argv[1]) * atoi(argv[2]);
if (argc != 3)
{
printf("ERROR\n");
return (1);
}
printf("%d\n", a);
return (0);
}
