#include <unistd.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - the function that corresponds to the operator
 *
 * @s: a char pointer
 *
 * Return: the pointer of function operator
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

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (0);
}
