#include "lists.h"
/**
 * pop_listint - deletes node
 * Description: deletes the head node of a listint_t linked
 * list, and returns the head node’s data
 * @head: pointer to list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int aux;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	aux = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (aux);
}
