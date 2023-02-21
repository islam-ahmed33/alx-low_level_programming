#include "main.h"

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
void print_alphabet(void)
{
  for(int i = 0 ;i < 26; i++)
    {
      _putchar(char(i+97));
    }
  _puchar('\n');
}
