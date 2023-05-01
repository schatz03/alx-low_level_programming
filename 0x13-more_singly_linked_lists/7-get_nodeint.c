#include "lists.h"
/**
 * get_nodeint_at_index - function function.
 * @head: input.
 * @index: index to return.
 * Return: NUll
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *getnode;
	unsigned int n;
for (getnode = head, n = 0; getnode && n < index; getnode = getnode->next, n++)
		;
	return (getnode);
}
