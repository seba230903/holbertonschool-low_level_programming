#include "lists.h"
/**
 * add_nodeint_end - adds new node
 * Description: adds a new node at the end of a listint_t list
 * @head: pointer to list
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (*head);
}
