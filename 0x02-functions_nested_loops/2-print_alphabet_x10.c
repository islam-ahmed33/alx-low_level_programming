#include "main.h"
/**
 *print_alphabet_x10 - print all char from a to z 10x
 * Description: 'the program's description'
 */
void print_alphabet_x10(void)
{
int i = 0;
while( i < 10 )
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
