#include "lists.h"

/**
 * list_len - print len
 * @h: pointer to frist node
 *
 * Return: The element size of lists
 */

size_t list_len(const list_t *h)
{
int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
