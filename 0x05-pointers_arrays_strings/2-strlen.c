#include "main.h"
/**
 * _strlen -  function that returns the length of a string
 *
 * @s: the string
 * Return: the value of length
 */

int _strlen(char *s)
{
int cnt = 0;
while (s[cnt] != '\0')
{
cnt++;
}
return (cnt);
}
