#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: a type char pointer
 *
 * @needle: a type char pointer
 *
 * Return: a substring as type a char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
