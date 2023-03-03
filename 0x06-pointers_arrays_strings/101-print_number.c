#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n :the number will be printed
 *
 */
void print_number(int n)
{
unsigned int num = n, d = 1;
if (n < 0)
{
	_putchar('-');
	num = -n;
}
while (num / d >= 10)
{
	d *= 10;
}
while (d)
{
	_putchar((num / d) % 10 + '0');
	d /= 10;
}
}
