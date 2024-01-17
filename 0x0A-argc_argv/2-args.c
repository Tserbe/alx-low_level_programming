#include <stdio.h>
#include "main.h"
/**
 * main - main entry
 * @argv: arrgvv
 * @argc: argccc
 * Return: should return zero
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
printf("%s\n", argv[a]);
return (0);
}
