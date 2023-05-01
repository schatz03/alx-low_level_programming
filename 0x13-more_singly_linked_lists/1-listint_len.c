#include "lists.h"

/**
 * listint_len - prints len
 * @h: pointer to first node
 *
 * Return: the element linked
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
