#include "main.h"

/**
 * isdigit - function that checks for a digit (0 through 9)
 * @c: The character to be checked
 * Return: 1 if c is digit 0 otherwise
 * Description: 'the program's description'
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
