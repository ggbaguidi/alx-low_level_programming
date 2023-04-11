#include <stdlib.h>
#include "main.h"

/**
 * create_array - ceate a char array
 *
 * @size: unsigned int type
 *
 * @c: type char initial char
 *
 *Owned by Guy A GBAGUIDI
 *
 * Return: a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
