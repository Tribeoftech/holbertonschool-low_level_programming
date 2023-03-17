#include "lists.h"

/**
 * free_list - Free's a SLL
 * @head: Pointer to head
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *new_node;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		new_node = head->next;
		free(head->str);
		free(head);
		head = new_node;
	}

	free(head->str);
	free(head);
}
