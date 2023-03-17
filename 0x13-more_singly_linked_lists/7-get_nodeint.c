#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linekd list
 * @head: Pointer to head
 * @index: Index of the node, starting at 0
 * Return: Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;

	unsigned int x = 0;

	new_node = head;

	if (index >= listint_len(head))
		return (NULL);

	while (x < index)
	{
		new_node = new_node->next;
		x++;
	}
	return (new_node);
}

/**
 * listint_len - finds length of list
 * @h: Pointer to head
 * Return: Length
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
