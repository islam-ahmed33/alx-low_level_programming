#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: 'the program's description'
 */

void times_table(void)
{
int i,j,k,c,cc;
for (i = 0;i < 10;i++)
{
for (j = 0;j < 10;j++)
{
k = i * j;
if (j == 0)
{
_putchar(k + '0');
_putchar(',');
}
else
{
if (k < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else
{
c = k % 10;
cc = k % 100 / 10;
_putchar(' ');
_putchar(cc + '0');
_putchar(c + '0');
}
if (j != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
