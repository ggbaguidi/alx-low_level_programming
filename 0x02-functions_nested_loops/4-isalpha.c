#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if a letter is alpha
 *
 * @c: type int
 *
 * Return: 1 if true and 0 else (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
