#include "lists.h"
/**
 * free_listint2 - frees list
 * Description: frees a listint_t list
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
