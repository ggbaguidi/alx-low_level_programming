#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Entry c
 *
 * @c: type int
 *
 * Return: Always int (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
