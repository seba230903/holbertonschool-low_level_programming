#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * Description: adds an element to the hash table
 * @ht: hash table
 * @key: str
 * @value: str
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size;
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (ht->array[index] && strcmp(key, ht->array[index]->key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
