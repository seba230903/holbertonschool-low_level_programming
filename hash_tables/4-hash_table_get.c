#include "hash_tables.h"
/**
 * hash_table_get - gets a value
 * Description: retrieves a value associated with a key
 * @ht: hash table
 * @key: char
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int aux = 0;

	if (!ht || !key)
		return (NULL);
	aux = key_index((unsigned char *)key, ht->size);
	if (ht->array[aux] == NULL)
		return (NULL);
	while (ht->array[aux])
	{
		if (strcmp(ht->array[aux]->key, key) == 0)
			return (ht->array[aux]->value);
		ht->array[aux] = ht->array[aux]->next;
	}
	return (NULL);
}
