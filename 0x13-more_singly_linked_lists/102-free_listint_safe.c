#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees lists with a loop
 *
 * @h: head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop_node || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
