#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint - adds a node at the beginning of a list
* @head: a pointer to a pointer to a linked list
* @n: holds the data for the node
* Return: a pointer to head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !newnode)
		return (NULL);

	newnode -> next = NULL;
	newnode -> next = n;
	if (*head)
		newnode -> next = *head;
	*head = newnode;
	return (newnode);
}

