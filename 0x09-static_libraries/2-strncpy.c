#include "main.h"
#include <string.h>

/**
 * _strncpy - Function should work exactly like strcnpy
 *
 * @dest: type char pointer
 *
 * @src: type char pointer
 *
 * @n: type int
 *
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
