#include "main.h"

/**
 * print_line - Task 6
 *
 * @n: number of times the character should be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
