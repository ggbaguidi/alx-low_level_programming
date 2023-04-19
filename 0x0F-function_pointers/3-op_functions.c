#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - the sum
 *
 * @a: a first int
 *
 * @b: a second int
 *
 * Return: the sume of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference
 *
 * @a: a first int
 *
 * @b: a second int
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product
 *
 * @a: a first int
 *
 * @b: a second int
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division
 *
 * @a: a first int
 *
 * @b: a second int
 *
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - the remainder of the division
 *
 * @a: a fisrt int
 *
 * @b: a second int
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
