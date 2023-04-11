#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		cnt += (diff & 1);
		diff >>= 1;
	}

	return (cnt);
}
