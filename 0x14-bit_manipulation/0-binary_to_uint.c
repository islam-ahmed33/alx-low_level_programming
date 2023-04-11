#include "main.h"

/**
 * binary_to_unit - function that converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
 * if there is one or more chars in the string b that is not 0 or 1.
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int bit;
	int i = 0;

	if (b == NULL || b == 0)
		return (0);

	while (b[i])
	{
		if (b[i] == '0')
			bit = 0;
		else if (b[i] == '1')
			bit = 1;
		else
			return (0);

		res = (res << 1) | bit;
		i++;
	}

	return (res);
}
