#include "main.h"
/**
 * _strpbrk - the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 * @s: char array string
 * @accept: substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return ('\0');
}

