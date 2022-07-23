#include "lists.h"
/**
 * insert_dnodeint_at_index - adds new node
 * Description: inserts a new node at a given position
 * @h: pointer to list
 * @idx: int
 * @n: int
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p;
	dlistint_t *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	p = *h;
	while (i < idx - 1)
	{
		i++;
		p = p->next;
		if (!p)
			return (NULL);
	}
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = p->next;
	new->prev = p;
	if (p->next)
		p->next->prev = new;
	p->next = new;
	return (new);
}
