#include "main.h"
/**
 * print_array -  function that prints n elements of an array of integers
 * @a : array
 * @n : size of array
 */

void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
	printf("\n");
}
else
{
printf("%d", a[0]);
for (i = 1; i < n; i++)
{
	printf(", %d", a[i]);
}
printf("\n");
}
}
