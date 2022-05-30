#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: 0 (Successful)
 *
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
