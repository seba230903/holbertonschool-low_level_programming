#include "hash_tables.h"
/**
 * key_index - gives index key
 * Description: gives you the index of a key
 * @key: char
 * @size: int
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
