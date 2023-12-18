#include <stdio.h>

/**
 * main - this is where the outcome is to be lower case
 * Return: should return zero.
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	putchar(d);
	for (d = 'A'; d <= 'Z'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
