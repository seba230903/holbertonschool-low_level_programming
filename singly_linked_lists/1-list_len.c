#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * Description: returns number of elements in linked list
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
