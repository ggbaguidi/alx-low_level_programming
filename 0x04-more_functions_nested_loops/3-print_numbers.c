#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number
 *
 * Return: None
 *
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
