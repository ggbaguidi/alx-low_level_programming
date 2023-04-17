#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Prints
 *
 * Owned by Guy A GBAGUIDI
 *
 * Return: EXITT_SUCCESS
 */

int main(void)
{
	write(1, __FILE__, strlen(__FILE__));
	write(1, "\n", 1);
	return (0);
}
