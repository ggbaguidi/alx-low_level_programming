#include "main.h"

/**
 * swap_int - swap two integer
 *
 * @a: type int pointer
 * @b: type int pointer
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
