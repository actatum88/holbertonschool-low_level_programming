#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *top = head;

	while (head != NULL)
		{
		       top = head->next;
		       free(head);
		       head = top;
		}
}
