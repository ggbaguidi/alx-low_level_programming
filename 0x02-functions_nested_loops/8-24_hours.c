#include "main.h"

/**
 * jack_bauer - 24 h
 *
 *
 * Return: 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k, u, r, q;

	for (i = 0; i < 24; i++)
	{
		k = i / 10;
		u = i % 10;
		for (j = 0; j < 60; j++)
		{
			q = j / 10;
			r = j % 10;
			_putchar(k + '0');
			_putchar(u + '0');
			_putchar(':');
			_putchar(q + '0');
			_putchar(r + '0');
			_putchar('\n');
		}
	}


}
