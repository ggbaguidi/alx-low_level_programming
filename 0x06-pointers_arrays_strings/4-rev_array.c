#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: type char pointer
 *
 * @n: type int
 *
 * Return: None
 */
void reverse_array(int *a, int n)
{
	int i;
	int *tmp = NULL;

	tmp = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		*(tmp + i) = *(a + i);
	}

	for (i = 0; i < n; i++)
	{
		*(a + i) = *(tmp + n - 1 - i);
	}
	free(tmp);
}
