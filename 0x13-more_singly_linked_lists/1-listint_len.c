#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: Pointer to header
 * Return: Number of elements
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
