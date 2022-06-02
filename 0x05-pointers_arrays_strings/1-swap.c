#include "main.h"

/**
 * swap_int - Task 1
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
