#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table as a python dictionary
 * @ht: Hash table to print
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *p;
	char n = 0;

	if (ht)
	{
		printf("{");
		for (x = 0; ht && x < ht->size; x++)
		{
			p = ht->array[x];
			while (p)
			{
				if (n == 1)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				n = 1;
			}
		}
		printf("}\n");
	}
}
