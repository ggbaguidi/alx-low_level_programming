#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - lowercase
 *
 * Return: none (Success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar(97 + i);
	}
	putchar('\n');
}
