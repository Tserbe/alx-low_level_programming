#include "main.h"
#include <stdio.h>
/**
  * leet - main entry
  * @n: source
  * Return: returns dest
  */
char *leet(char *n)
{
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
int c;
int d;

for (c = 0; n[c] != '\0'; c++)
{
for (d = 0; d < 10; d++)
{
if (n[c] == a[d])
{
n[c] = b[d];
}
}
}
return (n);
}
