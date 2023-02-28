#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 *
 * @str : string
 */
void puts_half(char *str)
{
int len = 0, i;
while (str[len] != '\0')
{
len++;
}

for (i = (len - 1) / 2 + 1; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
