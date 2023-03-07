#include "main.h"
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
	int i, sum_D, size_D = 0;

	i = 0;
	sum_D = 0;
	size_D = size * size;
	while (i < size_D)
	{
		if (i % (size + 1) == 0)
			sum_D += a[i];
		i++;
	}
	printf("%d, ", sum_D);

	sum_D = 0;
	i = 0;
	while (i < size_D)
	{
		if (i % (size - 1) == 0 && i != (size_D - 1) && i != 0)
			sum_D += a[i];
		i++;
	}
	printf("%d\n", sum_D);
}
