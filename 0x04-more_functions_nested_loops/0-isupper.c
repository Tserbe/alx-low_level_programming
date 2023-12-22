#include "main.h"

/**
 * _isupper - prints capital letters
 * Return: should always return  zero or one
 * @c: checks the character
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
