#include "lists.h"

/**
 * print_list - print all elements of list using linked list.
 * @h: pointer that points to the head
 * Return: nummber of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeNum = 0;
	const list_t *temp;

	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			nodeNum++;
		}
		else
		{
			printf("[%u]", temp->len);
			nodeNum++;
			printf(" %s\n", temp->str);
		}
		temp = temp->next;
	}
	return (nodeNum);
}
