#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest : first string
 * @src : second string
 * Returns : pointer to the resulting string dest
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
