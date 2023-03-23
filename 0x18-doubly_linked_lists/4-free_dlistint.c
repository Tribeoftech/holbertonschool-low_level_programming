#include "lists.h"

/**
 * free_dlistint - frees a list.
 *
 * @head: the head.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = head;

	while (freed != NULL)
	{
		if (freed->prev != NULL)
		{
			free(freed->prev);
		}
		if (freed->next == NULL)
		{
			free(freed);
			return;
		}
		else
		{
			freed = freed->next;
		}
	}
}
