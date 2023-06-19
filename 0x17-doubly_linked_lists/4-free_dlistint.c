#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Libère une liste dlistint_t.
 * @head: Pointeur vers le début de la liste chaînée.
 * Return : void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((free = head) != NULL)
	{
		head = head->next;
		free(free);
	}
}
