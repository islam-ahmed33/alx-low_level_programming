#include "main.h"
/**
 * _strstr - locate character in a string
 * @haystack: char array string
 * @needle: substring to look for
 * Return: NULL if char not found, or
 * pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}

		haystack++;
	}
	return ('\0');
}
