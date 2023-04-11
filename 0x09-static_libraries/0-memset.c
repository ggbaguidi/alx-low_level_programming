#include "main.h"

/**
 * _memset - function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 *
 * @s: type char pointer
 *
 * @b: type char
 *
 * @n: unsigned int
 *
 * Owned by Guy A GBAGUIDI
 *
 * Return: a pointer char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
