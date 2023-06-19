#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (current == NULL)
			{
				free(new);
				return (NULL);
			}
			current = current->next;
		}
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = current->next;
		if (current->next != NULL)
			current->next->prev = new;
		current->next = new;
		new->prev = current;
	}
	return (new);
}
