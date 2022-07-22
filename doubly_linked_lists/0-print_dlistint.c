#include "lists.h"
/**
 * print_dlistint - prints elements of list
 * Description: prints all the elements of a dlistint_t list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
