#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: unsigned int represent thee number of bytes
 *
 * Return: a void pointer type
 */
void *malloc_checked(unsigned int b)
{
	void *v = NULL;

	v = malloc(b);
	if (v == NULL)
		exit(98);
	return (v);
}
