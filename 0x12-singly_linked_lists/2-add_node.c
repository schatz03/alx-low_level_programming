#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Head of the list
 * @str: The new value for the node
 *
 * Return: Address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	if (str == NULL || head == NULL)
		return (NULL);

	for (len = 0; str[len] != 0; len++)
		;

	newnode->str = malloc(len + 1);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
