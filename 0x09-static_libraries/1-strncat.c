#include "main.h"
#include <string.h>

/**
 * _strncat - use n bytes from src for concatenating at dest
 *
 * @dest: type char pointer
 *
 * @src: type char pointer
 *
 * @n: type int
 *
 * Owned by Guy A GBAGUIDI
 * Return: result of concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
