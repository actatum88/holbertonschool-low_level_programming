#include "main.h"
/**
 * binary to uint - convert a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if there is one of more chars in the string b and not 0 or -1. b is NULL.
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int b = 0;
	unsigned int i = 1;

		if (b == NULL)
			return 0;
	
