#include "lists.h"

/**
 * add_node_end - a function that returns the length of a string.
 * @head: address of pointer to head node
 * @str: str input string
 *
 * Return: length of string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *endnode = *head;

	if (!head || !newnode)
		return (NULL);
	if (str)
	{
		newnode->str = strdup(str);
		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(newnode->str);
	}
	if (endnode)
	{
		while (endnode->next)
			endnode = endnode->next;
		endnode->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
