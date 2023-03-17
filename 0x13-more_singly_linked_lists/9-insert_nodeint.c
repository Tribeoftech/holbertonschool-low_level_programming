#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to head
 * @idx: Where node should be inserted
 * @n: Value for node
 * Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *trav;
	unsigned int x = 0, y = 0;

	trav = *head;
	while (trav)
	{
		y++;
		trav = trav->next;
	}
	if (idx > y)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	trav = *head;
	while (x < (idx - 1))
	{
		/* changes trav's current address to next node's address */
		trav = trav->next;
		x++;
	}
	new_node->next = trav->next;
	trav->next = new_node;
	return (new_node);
}

