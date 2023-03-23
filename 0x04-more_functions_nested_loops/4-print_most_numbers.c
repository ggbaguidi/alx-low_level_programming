#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print number without 2 and 4
 *
 * Return: None
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);
	}
	_putchar('\n');
}
