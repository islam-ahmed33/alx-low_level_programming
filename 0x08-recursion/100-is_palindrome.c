#include "main.h"

/**
 * is_palindrome - function that check string is a palindrome or not.
 *
 * @s: the string will know about it.
 *
 * Return: 1 or 0.
 *
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (is_plapla(s, 0, len - 1));

}

/**
 * is_plapla - function that check the string.
 * @s: the string
 * @start: the beginig of string.
 * @end: the end of string.
 *
 * Return: 1 or 0.
 *
 */

int is_plapla(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (is_plapla(s, start + 1, end - 1));
}
