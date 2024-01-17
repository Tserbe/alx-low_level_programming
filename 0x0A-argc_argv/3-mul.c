#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry
 * @argv: arrgvv
 * @argc: argccc
 * Return: should return zero
*/
int main(int argc, char *argv[])
{
int a;
int b;
int c;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
return (0);
}
