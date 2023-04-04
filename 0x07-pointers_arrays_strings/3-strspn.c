#include <string.h>
#include "main.h"

/**
 * _strspn - the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 * @s: type char pointer
 * @accept: type char pointer
 *
 * Owned by Guy A GBAGUIDI
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
