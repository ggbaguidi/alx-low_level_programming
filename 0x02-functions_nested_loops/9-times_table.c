#include "main.h"

/**
 * times_table - print a times table
 *
 * Return: None
 */
void times_table(void)
{
	int i, j, t, q, r;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			t = i * j;
			q = t / 10;
			r = t % 10;

			if (q == 0 && j == 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (q == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				_putchar(',');
			}
			else if (q != 0 && j == 9)
			{
				_putchar(' ');
				_putchar(q + '0');
				_putchar(r + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(q + '0');
				_putchar(r + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
