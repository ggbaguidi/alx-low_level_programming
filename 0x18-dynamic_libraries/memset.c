#include "main.h"

/**
 * _memset - fills  the first n bytes of the
 * memory area pointed to by s with the constant byte c
 * @s: a char ptr
 * @b: a char
 * @n: unsigned int type
 * Return: a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
