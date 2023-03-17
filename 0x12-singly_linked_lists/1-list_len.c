#include "lists.h"

/**
 * list_len - Returns length of list
 * @h: Pointer to head
 * Return: Length of list
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}

