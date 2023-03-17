#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a linekd list
 * @head: Pointer to head
 * Return: Sum of all data in list
 */

int sum_listint(listint_t *head)
{
	listint_t *new_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	new_node = head;
	while (new_node)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
