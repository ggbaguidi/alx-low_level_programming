#include <string.h>
#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: type char pointer
 *
 * @accept: type char pointer
 *
 * Owned by Guy A GBAGUIDI
 *
 * Return: a char pointer (string)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
