#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or ponter to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, ii = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[ii])
		ii++;

	str = malloc(sizeof(char) * (i + ii + 1));

	if (str == NULL)
		return (NULL);
	i = 0, ii = 0;

	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[ii])
	{
		str[i] = s2[ii];
		i++;
		ii++;
	}

	return (str);
}
