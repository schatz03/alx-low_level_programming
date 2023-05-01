#include "lists.h"

/**
 * print_listint - prints lists
 * @h: pointer to first node
 *
 * Return: the element linked
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
