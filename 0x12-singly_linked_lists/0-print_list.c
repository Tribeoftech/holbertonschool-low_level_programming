#include "lists.h"

/**
 * print_list - Prints all elements in a singly linked list
 * @h: Pointer to head
 * Return: Number of total nodes
 */

size_t print_list(const list_t *h)
{
	int x = 1;

	if (h == NULL)
		return (0);

	for (; h->next != NULL; x++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (x);
}
