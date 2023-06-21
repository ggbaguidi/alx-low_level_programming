#include "main.h"

/**
 * _strncat - concat str
 * @dest: a char pointer
 * @src: a char pointer
 * @n: a type int
 * Return: a char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
