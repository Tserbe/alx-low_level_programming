#include <stdio.h>

/**
 * main - this is where the outcome is to be lower case
 * Return: should return zero.
 */

int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
	if (d != 'q' && d != 'e')
	putchar(d);
	}
	putchar('\n');
	return (0);
}
