#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - pop link.
* @head: pointer double.
* Return: data.
*/
int pop_listint(listint_t **head)
{
	listint_t *pop_node;
	int n;

	if (!head || !*head)
		return (0);

	pop_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = pop_node;
	return (n);
}
