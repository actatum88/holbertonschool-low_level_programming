#include <stdio.h>

/**
 * main - Play alphabet game
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x= 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
