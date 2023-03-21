#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print alphabetics x10
 *
 * Return: none (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(97 + j);
		}
		_putchar('\n');
	}
}
