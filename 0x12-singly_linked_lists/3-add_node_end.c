#include "lists.h"

/**
 * add_node_end - add a node to the end of list
 * @head: adress of pointer to head node
 * @str: field of node
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	{
		new_node->str = strdup(str);
		if (new_node->str == 0)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(str);
	}
	else (str == NULL)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	new_node->next = NULL;
	return (new_node);
}
