#include "main.h"
#include <stdio.h>

/**
 * rot13 - main entry
 * @s: string is here
 * Return: returns is here
 */

char *rot13(char *s)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int c;
int d;

for (c = 0; s[c] != '\0'; c++)
{
for (d = 0; d < 52; d++)
{
if (s[c] == a[d])
{
s[c] = b[d];
break;
}
}
}
return (s);
}
