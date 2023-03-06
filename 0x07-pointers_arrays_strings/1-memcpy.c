#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 *
 * @dest: the pointer to starting point
 * @src: the pointer to the memory area to be copied
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
