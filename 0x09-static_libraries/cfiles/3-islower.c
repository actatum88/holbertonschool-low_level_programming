#include "main.h"
/**
 * _islower - if character is lowercase
 *
 * @c: Input from user or program
 *
 * Return: 0 (Successful)
 *
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
return (0);
}
