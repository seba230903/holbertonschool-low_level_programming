#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth of a node
 * Description: returns the nth node of a listint_t linked list
 * @head: pointer to list
 * @index: int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		p = p->next;
		i++;
	}
	return (p);
}
