
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - Function that prints all elements of a list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
