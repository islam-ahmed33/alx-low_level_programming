#include "main.h"
/**
 *_isalpha : function to check alphabetic character.
 *Description: 'the program's description'
 *@c: alphabet to check
 *Return: 1 if c is a letter,other 0;
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
