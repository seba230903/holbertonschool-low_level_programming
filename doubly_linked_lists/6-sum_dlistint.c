#include "lists.h"
/**
 * sum_dlistint - sums all data in the list
 * Description: returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to list
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum = 0;

	if (!head)
		return (0);
	p = head;
	while (p)
	{
		sum = sum + p->n;
		p = p->next;
	}
	return (sum);
}
