#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * Description: deletes the node at index index of a listint_t linked list
 * @head: pointer to list
 * @index: unsigned int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p1;
	listint_t *p2;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	p1 = (*head);
	if (index > 0)
	{
		while (p1 && i < index - 1)
		{
			p1 = p1->next;
			i++;
		}
		p2 = p1->next;
		p1->next = p2->next;
		free(p2);
	}
	else
	{
		(*head) = (*head)->next;
		free(p1);
	}
	return (1);
}
