#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print its name
 *@argc: print
 *@argv: print
 *
 *Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
