#include "lists.h"

/**
 *pop_listint - deletes head of node of listint_t and returns head node data
 *@head: pointer to head of list
 *Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int node_data;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
