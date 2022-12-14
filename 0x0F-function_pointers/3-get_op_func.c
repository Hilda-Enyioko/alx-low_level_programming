#include <string.h>
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - pointer to the function that selects the correct
 * operation asked by the user
 * @s: operator passed as the argument to the program
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter OR NULL(if s does not match any of the
 * expected operators
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
