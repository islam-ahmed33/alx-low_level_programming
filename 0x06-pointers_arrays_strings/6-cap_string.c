#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *s)
{
	char *p = s;
	int a, b, c, d, e;

	while (*p != '\0')
	{
		a = *(p - 1) == ' ' || *(p - 1) == '\t' || *(p - 1) == '\n';
		b = *(p - 1) == ',' || *(p - 1) == ';' || *(p - 1) == '.';
		c = *(p - 1) == '!' || *(p - 1) == '?' || *(p - 1) == '"';
		d = *(p - 1) == '(' || *(p - 1) == ')' || *(p - 1) == '{';
		e = *(p - 1) == '}';
		if (a || b || c || d || e)
		{
			if (*p >= 'a' && *p <= 'z')
				*p -= 32;
		}
		p++;
	}
	return (s);
}
