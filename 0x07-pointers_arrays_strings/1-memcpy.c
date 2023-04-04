#include <string.h>
#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area 
 * src to memory area dest
 *
 * @dest: type char pointer
 *
 * @src: type char pointer
 *
 * @n: type unsigned int
 *
 * Owned by Guy A GBAGUIDI
 *
 * Return: a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
