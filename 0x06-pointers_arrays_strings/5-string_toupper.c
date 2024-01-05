#include "main.h"
/**
  * string_toupper - main entry
  * @n: source
  * Return: returns dest
  */
char *string_toupper(char *n)
{
int a;

a = 0;
while (n[a] != '\0')
{
if (n[a] >= 'a' && n[a] <= 'z')
n[a] = n[a] - 32;
a++;
}
return (n);
}
