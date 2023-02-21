#include "main.h"
/**
 *_isalpha : function to check alphabetic character.
 *
 *@c: alphabet to check
 *Return: 1 if c is a letter,other 0;
 *
 *Description: 'the program's description'
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
