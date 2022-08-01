#include "lists.h"

/**
 * print_dlistint - prints the contents of a doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *seek, *head;
	size_t nodes;

	if (!h)/*check if list is NULL*/
		return (0);
	head = (dlistint_t *)h;
	while (head->prev) /*find the head*/
		head = head->prev;
	seek = head;
	for (nodes = 0; seek != NULL; nodes++)/*increment nodes until NULL*/
	{
		printf("%d\n", seek->n);/*print each integer*/
		seek = seek->next;
	}
	return (nodes);
}
