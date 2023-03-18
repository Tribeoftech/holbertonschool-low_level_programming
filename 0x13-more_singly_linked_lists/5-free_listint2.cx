#include "lists.h"

/**
 * free_listint2 - frees a list.
 *
 * @head: the list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *yeet;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			yeet = *head;
			*head = (*head)->next;
			free(yeet);
		}
		*head = NULL;
	}
}
