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
size_t count = 0;   /* count of elements */

while (temp != NULL)
    {
    count++;
    temp = temp->next;
    }
    if (temp == NULL)
	printf("List is empty\n");

	return (count);
}

