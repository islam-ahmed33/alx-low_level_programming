#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, cen25 = 0, cen10 = 0, cen5 = 0, cen2 = 0, cen1 = 0, sol;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	cen25 = cents / 25;
	cents %= 25;
	cen10 = cents / 10;
	cents %= 10;
	cen5 = cents / 5;
	cents %= 5;
	cen2 = cents / 2;
	cents %= 2;
	cen1 = cents;

	sol = cen25 + cen10 + cen5 + cen2 + cen1;

	printf("%d\n", sol);

	return (0);

}
