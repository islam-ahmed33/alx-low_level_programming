#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
long int num = 612852475143, divisor = 2, sol = 0;
while (num > 1)
{
if (num % divisor == 0)
{
sol = divisor;
num /= divisor;
}
else
{
divisor++;
}
}
printf("%ld\n", sol);
return (0);
}
