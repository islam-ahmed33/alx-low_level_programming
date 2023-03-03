#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: the string to be changed
 * Return: pinter to the changed string
 */

char *rot13(char *s)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sol[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = sol[j];
				break;
			}
		}
	}
	return (s);
}
