#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: Pointer to head
 * @str: String to assign to node
 * Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	tmp = *head;

	new_node = malloc(sizeof(list_t));
	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = length(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (*head);
}

/**
 * length - Calculates the length of a string
 * @s: Constant string
 * Return: Length
 */
unsigned int length(char *s)
{
	unsigned int x;

	if (s == NULL)
	{
		return (0);
	}

	while (s[x])
	{
		x++;
	}
	return (x);
}
