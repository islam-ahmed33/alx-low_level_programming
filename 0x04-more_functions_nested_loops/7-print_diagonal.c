#include "main.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n :  is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
_putchar(' ');
if (i == j)
{
_putchar('\\');
break;
}
}
_putchar('\n');
}
}
