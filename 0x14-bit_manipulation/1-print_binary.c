#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to print.
 * Return: the value in base 2.
 */

void print_binary(unsigned long int n)
{
	unsigned long int div = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (div)
	{
		if (n & div)
		{
			flag = 1;
			_putchar ('1');
		}
		else if (flag)
			_putchar('0');
		div >>= 1;
	}

	if (!flag)
		_putchar('0');
}
