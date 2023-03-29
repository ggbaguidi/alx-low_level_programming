#include <string.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters to upper
 *
 * @str: type char pointer
 *
 * Return: char pointer
 */
char *string_toupper(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if ('a' <= *(str + i) && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
	}
	return (str);
}
