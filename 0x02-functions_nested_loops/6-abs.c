#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the number.
 * Return: n if positive or zero , -n if negative
 */
int _abs(int n)
{
if (n < 0)
return (-1 * n);
else
return (n);
}
