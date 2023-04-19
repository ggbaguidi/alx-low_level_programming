#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: a int array
 *
 * @size: the number of elements in array array
 *
 * @cmp: a pointer to the function to be used to compare values
 *
 * Owned by Guy A GBAGUIDI
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(*(array + i)))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
