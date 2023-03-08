#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n:given number.
 *
 * Return: the value of sqrt n.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (lol(n, 0));
}

/**
 * lol - function that returns i.
 * @n: given number.
 * @i: ans number.
 *
 * Return: the ans i.
 */

int lol(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (lol(n, i + 1));
}
