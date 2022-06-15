#include <stdlib.h>
#include <stdio.h>

/**
 * main - nargs
 *@argc: nargs
 *@argv: nargs
 *
 *Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
