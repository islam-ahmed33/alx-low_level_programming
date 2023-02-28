#include "main.h"
/**
 * _atio - function that convert a string to an integer.
 * @s: the string to be comverted.
 * Return: The integer value of the comverted string.
 *
 */
int _atoi(char *s)
{
int sign = 1, sol = 0;
while (*s != '\0')
{
	if (*s == '-')
	{
		sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
		sol = sol * 10 + (*s - '0');
	}
	else if (sol != 0)
	{
		break;
	}
	s++;
}
	return (sign * sol);
}
