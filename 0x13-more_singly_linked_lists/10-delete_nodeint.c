#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to head
 * @index: Where to delete node
 * Return: 1 if successful, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *trav;
	unsigned int x = 0, y = 0;

	if (*head == NULL)
		return (-1);

	trav = *head;
	while (trav)
	{
		y++;
		trav = trav->next;
	}
	if (index >= y)
		return (-1);
	trav = *head;
	if (index == 0)
	{
		*head = trav->next;
		free(trav);
	}
	else
	{
		for (x = 0; trav != NULL && x < (index - 1); x++)
			trav = trav->next;
		new_node = trav->next->next;
		free(trav->next);
		trav->next = new_node;
	}
	return (1);
}
