#include "lists.h"

/**
 * print_listint - prints all elements of a list storing ints
 * @h: current head of LL
 * Return: number of elements as unsigned int
 */

size_t print_listint(const listint_t *h)
{
	int n;
	const listint_t *tmp;

	for (n = 0, tmp = h; tmp; tmp = tmp->next, n++)
	{
		printf("%d\n", tmp->n);
	}

	return (n);
}
