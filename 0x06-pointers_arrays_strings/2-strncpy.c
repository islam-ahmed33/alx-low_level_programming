#include "main.h"

/**
 *  _strncpy - is similar to the _strcpy function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the pointer to copy string at
 * @src: the pointer to string to be copied
 * @n : number of characters to be copied from src to dest
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
