#include "lists.h"
/**
 * add_nodeint - adds new node
 * Description: adds a new node at the beginning of a listint_t list
 * @h: pointer to list
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (0);
	p->n = n;
	p->next = *head;
	*head = p;
	return (*head);
}
