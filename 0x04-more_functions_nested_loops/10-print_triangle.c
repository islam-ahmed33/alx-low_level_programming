#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size :is the size of the triangle
 */
void print_triangle(int size)
{
int i, j, spaces;
if (size <= 0)
{
_putchar('\n');
}
for (i = size; i > 0; i--)
{
for (spaces = 1; spaces < i; spaces++)
{
_putchar(' ');
}
for (j = size; j >= i; j--)
{
_putchar('#');
}
_putchar('\n');
}
}
