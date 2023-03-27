#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: pntr to table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *search;
	int flag = 1;
	unsigned long int index;

	if (!ht)
		return;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		search = ht->array[index];
		while (search != NULL)
		{
			if (flag == 0)
				printf(", ");
			printf("'%s': '%s'", search->key, search->value);
			flag = 0;
			search = search->next;
		}
	}
	printf("}\n");
}
