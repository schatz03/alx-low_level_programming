#include "lists.h"

/**
 * free_list - free all nodes of a list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
