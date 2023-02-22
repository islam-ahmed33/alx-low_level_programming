#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n = 50;
long long a = 1, b = 2, c, i;
printf("%d, %d, ", a, b);
for (i = 3; i <= n; i++)
{
c = a + b;
printf("%d", c);
if (i != n)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return (0);
}
