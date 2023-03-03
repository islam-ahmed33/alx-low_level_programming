#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: input string
 * Return: s pinter to the changed string
 *
 */

char *leet(char *s)
{
	char leet_S[] = "AaEeOoTtLl";
	char leet_N[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet_S[j])
			{
				s[i] = leet_N[j];
			}
		}
	}

	return (s);
}
