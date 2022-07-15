#include "lists.h"
/**
 * listint_len - returns number of elements
 * Description: returns the number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p = h;

	for (; p; p = p->next)
		i++;
	return (i);
}
