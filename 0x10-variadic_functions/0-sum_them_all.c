#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of param
 * Return: sum of param
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list numbers;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
