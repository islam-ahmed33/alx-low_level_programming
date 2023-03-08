#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string will get len.
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	unsigned int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
