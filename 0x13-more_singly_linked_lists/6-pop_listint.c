#include "lists.h"

/**
 * pop_listint - Deletes head and returns it's value
 * @head: Pointer to head
 * Return: Value of head after deletion
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_head;
	int x;

	if (*head == NULL)
		return (0);

	x = (*head)->n;
	tmp_head = *head;
	*head = tmp_head->next;
	free(tmp_head);
	return (x);
}
