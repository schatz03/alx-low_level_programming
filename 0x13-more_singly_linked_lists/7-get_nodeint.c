#include "lists.h"
/**
 * get_nodeint_at_index - function function.
 * @head: input.
 * @index: index to return.
 * Return: NUll
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *G_node;
	unsigned int n;
for (G_node = head, n = 0; G_node && n < index; G_node = G_node->next, n++)
		;
	return (G_node);

}
