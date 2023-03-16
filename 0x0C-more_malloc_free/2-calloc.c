#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array using malloc.
 * @nmemb: number of elements in array.
 * @size: size of elements of array.
 *
 * Return: NULL || ponter to memory allocated.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int sz;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sz = nmemb * size;
	p = malloc(sz);

	if (p == NULL)
		return (NULL);

	memset(p, 0, sz);

	return (p);
}
