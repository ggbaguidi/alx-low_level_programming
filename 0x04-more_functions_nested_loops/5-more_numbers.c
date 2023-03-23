#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 0 at 14 x10
 *
 * Return: None
 *
 */

void more_numbers(void)
{
	int i, j, q, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			r = j % 10;
			q = j / 10;
			if (q != 0)
			{
				_putchar('0' + q);
				_putchar('0' + r);
			}
			else
				_putchar('0' + j);
		}
		_putchar('\n');
	}
}
