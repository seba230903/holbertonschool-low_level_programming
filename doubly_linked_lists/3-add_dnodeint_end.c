#include "lists.h"
/**
 * add_dnodeint_end - adds new node
 * Description: adds a new node at the end of a dlistint_t list
 * @head: pointer to list
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *p;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
		new->prev = p;
	}
	return (new);
}
