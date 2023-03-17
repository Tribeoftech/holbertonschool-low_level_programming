#include "lists.h"
/**
 * add_node - Adds a new node to the beginning of list_t
 * @head: Pointer to head of list
 * @str: String inside node
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = length(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * length - finds length of string
 * @s: String
 * Return: Length of string
 */

unsigned int length(char *s)
{
	unsigned int x = 0;

	while (s[x])
	{
		x++;
	}
	return (x);
}
