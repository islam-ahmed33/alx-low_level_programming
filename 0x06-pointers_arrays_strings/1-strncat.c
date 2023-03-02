#include "main.h"
/**
 * _strncat - function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: the pointer to append string at
 * @src: the pointer to string to be appended
 * @n :bytes from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, siz_D = 0;

while (dest[siz_D] != '\0')
{
siz_D++;
}
while (i < n)
{
if (src[i] != '\0')
{
dest[siz_D + i] = src[i];
}
else
{
break;
}
i++;
}
dest[siz_D + i] = '\0';
return (dest);
}
