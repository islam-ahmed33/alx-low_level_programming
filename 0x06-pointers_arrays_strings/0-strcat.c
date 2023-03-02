#include "main.h"
/**
 * _strcat - function that appends the src string to the dest
 * string, overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * @dest: the pointer to append string at
 * @src: the pointer to string to be appended
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
	{
		int i = 0, siz_D = 0;

		while (dest[siz_D] != '\0')
		{
			siz_D++;
		}
		while (src[i] != '\0')
		{
			dest[siz_D + i] = src[i];
			i++;
		}
		dest[siz_D + i] = '\0';
		return (dest);
	}
