#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: a char pointer
 * @f: a function pointer which take a char pointer and return void
 * Owned by Guy A GBAGUIDI
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
