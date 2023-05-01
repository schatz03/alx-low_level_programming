#include "lists.h"

/**
 *free_listint2 - free list.
 * @head: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *libre;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		libre = node;
		node = node->next;
		free(libre);
	}
	*head = NULL;
}
