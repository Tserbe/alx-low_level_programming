#include "main.h"
int sqrt_r(int n, int y);
/**
 * _sqrt_recursion - main entry
 * @n: pointer
 * Return: returns always zero
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_r(n, 0));
}
/**
 * sqrt_r - recurses aa
 * @n: pointer s
 * @y: initiates
 * Return: returns always zero
 */
int sqrt_r(int n, int y)
{
if (y * y == n)
return (y);
if (y * y > n)
return (-1);
return (sqrt_r(n, y + 1));
}
