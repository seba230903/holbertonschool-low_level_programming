#include "lists.h"
/**
 * add_dnodeint - adds node
 * Description: adds a new node at the beginning of a dlistint_t list
 * @head: pointer to list
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	
	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = (*head);
	new->n = n;
	if (!*head)
		new->next = NULL;
	else
		(*head)->prev = new;
	(*head) = new;
	return (*head);
}
