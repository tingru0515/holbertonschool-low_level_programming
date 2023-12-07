#include "hash_tables.h"
/**
* hash_table_create - Create a hash table
* @size: the size of the hash table
* Description: allocating a hash table using given size
* Return: NULL error or hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);
	if (hash_table->array == NULL)
		return (NULL);
	return (hash_table);
}
