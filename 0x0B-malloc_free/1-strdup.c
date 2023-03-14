#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @str: string
 * Return: NULL or  pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		new_str[j] = str[j];

	return (new_str);
}
