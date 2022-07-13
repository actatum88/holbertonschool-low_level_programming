#include "lists.h"
/**
 * free_listint2 - frees memory used
 * @head: pointer to the head of list
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
