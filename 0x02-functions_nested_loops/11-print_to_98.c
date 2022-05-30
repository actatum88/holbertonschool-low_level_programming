#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Task 11 prints all natural numbers from n to 98
 *
 * @n: given from user/program
 *
 * Return: 0 (Successful)
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	} else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i);
}
