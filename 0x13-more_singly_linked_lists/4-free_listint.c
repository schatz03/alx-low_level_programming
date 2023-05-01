#include "lists.h"

/**
 *free_listint - free list.
 * @head: head.
 */
void free_listint(listint_t *head)
{
	listint_t *freenode;

	while (head)
	{
		freenode = head;
		head = head->next;
		free(freenode);
	}
}
