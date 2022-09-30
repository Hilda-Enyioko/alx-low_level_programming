#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments a program receives
* @argc: argument count(int)
* @argv: argument vector(array)
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
