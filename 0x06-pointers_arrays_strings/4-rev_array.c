#include "main.h"
/**
  * reverse_array - main entry
  * @a: destination
  * @n: source
  * Return: returns dest
  */
void reverse_array(int *a, int n)
{
int b;
int c;

for (b = 0; b < n--; b++)
{
c = a[b];
a[b] = a[n];
a[n] = c;
}
}
