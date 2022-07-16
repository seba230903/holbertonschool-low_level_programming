#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node
 * Description: inserts a new node at a given position
 * @head: pointer to list
 * @idx: unsigend int
 * @n: int
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (p && i < idx - 1)
	{
		p = p->next;
		i++;
	}
	new->next = p->next;
	p->next = new;
	return (new);
}
