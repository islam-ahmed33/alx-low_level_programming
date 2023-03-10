#include "main.h"
#include <stdio.h>

/**
 * main - function takes two arguments, an integer argc and a string array argv
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	__attribute__((unused)) int unused_argc = argc;

	printf("%s\n", argv[0]);
	return (0);
}
