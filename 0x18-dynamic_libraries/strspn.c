#include "main.h"

/**
 * _strspn - ..
 * @s: a char pointer
 * @accept: a char pointer
 * Return: a unsigned int type
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
