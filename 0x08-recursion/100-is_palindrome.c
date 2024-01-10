#include "main.h"
int start_a(char *s, int a, int b);
int recursio_bn(char *s);
/**
 * is_palindrome - main entry
 * @s: string
 * * Return: zero
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (start_a(s, 0, recursio_nb(s)));
}
 /* recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int recurssio_bn(char *s)
{
if (*s == '\0')
return (0);
return (1 + recursio_nb(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if no
 */
int start_a(char *s, int a, int b)
{
if (*(s + a) != *(s + b - 1))
return (0);
if (a >= b)
return (1);
return (check_pal(s, a + 1, b - 1));
}
