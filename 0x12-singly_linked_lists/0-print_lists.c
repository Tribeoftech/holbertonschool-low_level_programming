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
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str != NULL)
            printf("[%d] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");
        
        h = h->next;
        count++;
    }

    return count;
}
