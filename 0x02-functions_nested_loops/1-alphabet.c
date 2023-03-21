#include <stdio.h>

/**
 * print_alphabet - lowercase
 *
 * Return: none (Success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 25; i++)
	{
		putchar('%c', 97 + i);
	}
	putchar('\n');
}
