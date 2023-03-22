#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @n: type int
 *
 * Return: int (Success)
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (d);
}
