#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry n check the sign of n
 *
 * @n: type int
 *
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
