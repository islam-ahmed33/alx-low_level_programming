#include<stdio.h>
/**
* main - a program that the size of various types on the computer it is compiled and run on.
* Return: 0 (This program will be successful)
*/
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long: %ld byte(s)\n", sizeof(long));
printf("Size of a long long: %ld byte(s)\n", sizeof(long long));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
