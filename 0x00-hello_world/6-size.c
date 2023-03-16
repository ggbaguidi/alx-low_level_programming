#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	puts("Size of a char: %ul byte(s)",(unsigned long)sizeof(a));
	puts("Size of an int: %ul byte(s)",(unsigned long)sizeof(b));
	puts("Size of a long int: %ul byte(s)",(unsigned long)sizeof(c));
	puts("Size of a long long int: %ul byte(s)",(unsigned long)sizeof(d));
	puts("Size of a float: %ul byte(s)",(unsigned long)sizeof(e));
	return (0);
}
