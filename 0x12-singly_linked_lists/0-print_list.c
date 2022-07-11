#include "lists.h"

/**
 * print_list - print all elements of list using linked list.
 * @h: pointer that points to the head
 * Return: nummber of nodes
 */

size_t print_list(const list_t *h)

{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
