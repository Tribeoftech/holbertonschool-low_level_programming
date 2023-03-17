#ifndef SINGLY_LISTS
#define SINGLY_LISTS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct sllist - Structure used for singly linked lists?
 * @str: char * inside node
 * @len: Length of list
 * @next: Node after what we are pointing to
 */
typedef struct sllist
{
	char *str;
	unsigned int len;
	struct sllist *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
unsigned int length(char *s);
#endif
