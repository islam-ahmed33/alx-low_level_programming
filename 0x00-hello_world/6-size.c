#include<stdio.h>
/**
* main - a program that the size of various types on the computer it is compiled and run on.
* Return: 0 (This program will be successful)
*/
int main(void)
{
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long: %ld byte(s)\n", sizeof(long));
printf("Size of long long: %ld byte(s)\n", sizeof(long long));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
