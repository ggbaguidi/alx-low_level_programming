#include "main.h"

/**
 * _memcpy - char *_memset(char *s, char b, unsigned int n
 * @dest: a char ptr
 * @src: a char ptr
 * @n: unsigned int type
 * Return: a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
