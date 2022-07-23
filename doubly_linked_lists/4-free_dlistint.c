#include "lists.h"
/**
 * free_dlistint - frees list
 * Description: frees a dlistint_t list
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
	free(head);
}
