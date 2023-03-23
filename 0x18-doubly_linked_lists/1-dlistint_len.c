#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list.
 *
 * @h: the starting node.
 *
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (current == 0)
	{
		return (0);
	}
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
