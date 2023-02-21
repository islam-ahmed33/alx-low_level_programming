#include "main.h"
/**
 * print_sign - function to print the sign of a
 * @n: the number we will test on.
 * Return: 1 if positive, 0 if zero,-1 if negati
 */
int print_sign(int n)
{
if(n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (1);
}
}
