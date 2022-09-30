#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: argument count(int)
* @argv: argument vector(array)
* Return: 0
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d", argc - 1);
return (0);
}
