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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
