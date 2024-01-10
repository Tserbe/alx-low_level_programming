#include "main.h"
/**
  * factorial - mainn entyr
  * @n: Pointer
  * Return: Returns zero
  */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
