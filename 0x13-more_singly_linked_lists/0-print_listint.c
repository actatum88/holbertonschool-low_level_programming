#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%u\n", h->n);
		temp = temp->next;
		number++;
	}
	return (number);
}
