#include "main.h"
/**
 * _strspn - the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 * @s: char array string
 * @accept: substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	char *ch = s;

	while (*accept != '\0')
	{
		while (*ch != '\0' && *ch != ' ')
		{
			if (*accept == *ch)
			{
				cnt++;
			}
			ch++;
		}
		ch = s;
		accept++;
	}
	return (cnt);
}
