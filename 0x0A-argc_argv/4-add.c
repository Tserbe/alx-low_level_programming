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
int a, b, sum = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
