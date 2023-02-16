#include<stdio.h>
/**
* main - a program that the size of various types on the computer it is compiled and run on.
* Return: 0 (This program will be successful)
*/
int main(void)
{
char ch;
int num;
long int num_l;
long long int num_ll;
float num_f;

printf("Size of a char: %ld byte(s)\n", sizeof(ch));
printf("Size of an int: %ld byte(s)\n", sizeof(num));
printf("Size of a long int: %ld byte(s)\n", sizeof(num_l));
printf("Size of a long long int: %ld byte(s)\n", sizeof(num_ll));
printf("Size of a float: %ld byte(s)\n", sizeof(num_f));
return (0);
}
