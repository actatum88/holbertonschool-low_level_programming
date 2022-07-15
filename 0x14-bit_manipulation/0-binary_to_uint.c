#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int value = 0, base = 1;
	int i = 0;

		if (b == NULL)
			return (0);
		while (b[i] != '\0')
			i++;
		for (i = i - 1; i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			if (b[i] == '1')
				value += base;
			base = base * 2;
		}
		return (value);
}
