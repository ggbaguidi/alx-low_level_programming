#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given a parameter on each element of an array
 *
 * @array: a int array
 *
 * @size: a size_t type
 *
 * @action: a pointer to the function you need to use
 *
 * Owned by Guy A GBAGUIDI
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
