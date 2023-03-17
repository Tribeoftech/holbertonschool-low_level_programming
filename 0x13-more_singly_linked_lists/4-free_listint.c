#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
