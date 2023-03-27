#include "hash_tables.h"

/**
 * hash_table_set -  adss an element to hash table
 * if collision adds new node at begining of the list
 * @ht: hashtable to add/update
 * @key: The key
 * @value: value for the key
 * Return: 1 if success, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *search, *new_node = NULL;
	unsigned long int index;
	char *new_value = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	search = ht->array[index];

	while (search != NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			new_value = strdup(value);
			free(search->value);
			search->value = new_value;
			return (1);
		}
		search = search->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
