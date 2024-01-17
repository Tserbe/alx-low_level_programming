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
int d[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
c = 0;
if (a < 0)
{
printf("0\n");
return (0);
}
for (b = 0; b < 5 && a >= 0; b++)
{
while (a >= d[b])
{
c++;
a -= d[b];
}
}
printf("%d\n", c);
return (0);
}
