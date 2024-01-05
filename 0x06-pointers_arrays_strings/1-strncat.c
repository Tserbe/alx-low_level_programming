#include "main.h"
/**
  * _strncat  - main entry
  * @dest: destination
  * @src: source
  * @n: to be explained later
  * Return: returns dest
  */

char *_strncat(char *dest, char *src, int n)
{
int a = strlen(dest);
int b;

for (b = 0; b < n && *src != '\0'; b++)
{
dest[a + b] = *src;
src++;
}
dest[a + b] = '\0';
return (dest);
}
