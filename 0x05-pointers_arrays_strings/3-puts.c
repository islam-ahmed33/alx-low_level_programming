#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str : String will be printed
 *
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
