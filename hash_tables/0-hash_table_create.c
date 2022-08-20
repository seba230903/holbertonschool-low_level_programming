#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * Description: creates a hash table
 * @size - int
 * Return: pointer to newly created hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
