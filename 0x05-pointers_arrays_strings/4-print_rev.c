#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print reverse string
 *
 * @s: type string pointer
 *
 * owrned by Guy A. GBAGUIDI
 * Return: None
 */
void print_rev(char *s)
{
	int i, l = strlen(s);

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
