#include "lists.h"

/**
 * print_list - print all elements of list using linked list.
 * @h: pointer that points to the head
 * Return: nummber of nodes
 */

size_t print_list(const list_t *h)

{
	int n;
	const list_t *temp;

	for (n = 0, tmp = h ; tmp ; tmp = tmp->next, n++)
	{
		if (!temp->str)
		{
			printf("[0] (nil)\n");
			continue;
		}

		printf("[%d] %s\n", tmp->len, tmp->str);
	}

	return (n);
}
