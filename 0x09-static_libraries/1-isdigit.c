#include "main.h"

/**
 * _isdigit - check if c is digit
 *
 * @c: type int
 *
 * Return: 1 if c is digit 0 else
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
