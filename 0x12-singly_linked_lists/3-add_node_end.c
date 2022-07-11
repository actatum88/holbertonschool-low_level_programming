#include "lists.h"

/**
 *add_node_end - will add a node to the end of the list
 *@head: a pointer at the head of list
 *@str: a pointer to the string of nodes
 *Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp;

	if (newNode == NULL || str == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
