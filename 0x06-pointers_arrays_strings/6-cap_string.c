#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes functions
 *
 * @s: type char pointer
 *
 *Owned by Guy A GBAGUIDI
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int l = strlen(s), i;

	for (i = 0; i < l; i++)
	{
		if (!('a' <= *(s + i) && *(s + i) <= 'z'))
		{
			if (!('A' <= *(s + i) && *(s + i) <= 'Z'))
			{
				if ('a' <= *(s + i + 1) && *(s + i + 1) <= 'z')
					*(s + i + 1) -= 32;
			}
		}
	}
	return (s);
}
