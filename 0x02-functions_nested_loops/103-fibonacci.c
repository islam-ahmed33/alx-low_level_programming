#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int i, j, k, sum;
i = 1;
j = 2;
sum = 2;
while (j <= 4000000)
{
k = i + j;
i = j;
j = k;
if (j % 2 == 0)
{
sum += j;
}
}
printf("%lu\n", sum);
return (0);
}
