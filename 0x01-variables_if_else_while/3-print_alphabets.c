#include <stdlib.h>
#include <time.h>
/**
 *main - print alphabet in lowercase, and then in uppercase
 *
 * Return: main
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
