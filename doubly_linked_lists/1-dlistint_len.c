#include "lists.h"
/**
 * dlistint_len - returns number of elements
 * Description: returns the number of elements in a linked dlistint_t list
 * @h: pointer to list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
