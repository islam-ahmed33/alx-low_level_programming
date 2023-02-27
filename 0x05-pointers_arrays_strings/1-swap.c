#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: 1st integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

