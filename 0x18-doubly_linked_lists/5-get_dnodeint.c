#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 *
 * @head: the head.
 * @index: the index.
 *
 * Return: NULL on failure, or the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *get = head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	while (count <= index)
	{
		if (get->next == NULL && count != index)
		{
			return (NULL);
		}
		else if (count == index)
		{
			return (get);
		}
		else
		{
			count++;
			get = get->next;
		}
	}
	return (get);
}

