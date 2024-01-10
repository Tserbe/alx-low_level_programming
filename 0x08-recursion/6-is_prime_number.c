#include "main.h"
int prime_number(int n, int y);
/**
 * is_prime_number - main entry
 * @n: pointer
 * Return: returns zero
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number(n, n - 1));
}
/**
 * prime_number - main entry
 * @n: pointer
 * @y: initiates
 * Return: returns zero
 */
int prime_number(int n, int y)
{
if (y == 1)
return (1);
if (n % y == 0 && y > 0)
return (0);
return (prime_number(n, y - 1));
}
