#include "lists.h"
/**
 * get_dnodeint_at_index - get node
 * Description: returns the nth node of a dlistint_t linked list
 * @head: pointer to list
 * @index: int
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (p && i < index)
	{
		p = p->next;
		i++;
	}
	return (p);
}
