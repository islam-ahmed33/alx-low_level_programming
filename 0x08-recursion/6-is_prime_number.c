#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: the given number
 *
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeN(n, n / 2));
}

/**
 * primeN - function that retun if prime or not.
 *
 * @n: the given number.
 * @i: the prime number.
 *
 * Return: 1 or zero.
 */

int primeN(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	else
		return (primeN(n, i - 1));
}
