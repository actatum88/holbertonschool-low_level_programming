#include <stdio.h>
/**
 * main - Print alphabet in lowercase on one line
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	for (c = 'a'; c < 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
