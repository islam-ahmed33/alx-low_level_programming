#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char cc
 * @size: size of array.
 * @c: char to assign.
 *
 *Return: pointer to array or NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
