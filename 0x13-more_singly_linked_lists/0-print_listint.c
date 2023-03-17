#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to head of list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 1;

	if (h == NULL)
		return (0);

	for (; h->next != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	printf("%d\n", h->n);
	return (x);
}
