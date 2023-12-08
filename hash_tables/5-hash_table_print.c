#include "hash_tables.h"
/**
* hash_table_print - print hash table
* @ht: hash table
* Return: Printed hash table or nth
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int init = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (init != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			init = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
