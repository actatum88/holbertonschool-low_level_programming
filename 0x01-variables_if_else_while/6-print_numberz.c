#include <stdio.h>

/**
 *
 * main - print numbers base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
putchar('\n');

return (0);
}
