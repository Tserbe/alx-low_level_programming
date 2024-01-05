#include "main.h"

/**
 * print_number - main entry
 * @n: string is here
 * Return: returns is here
 */
void print_number(int n)
{
unsigned int u;
u = n;

if (n < 0)
{
_putchar('-');
u = -n;
}
if (u / 10 != 0)
{
print_number(u / 10);
}
_putchar((u % 10) + '0');
}
