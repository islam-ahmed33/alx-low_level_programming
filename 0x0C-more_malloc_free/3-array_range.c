#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min value.
 * @max: max value.
 *
 * Return: NULL || pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int sz, i;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	arr = malloc(sz * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < sz; i++)
		arr[i] = min + i;

	return (arr);
}
