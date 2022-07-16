#include "lists.h"
/**
 * sum_listint - returns sum of data
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to list
 * Return: sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
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
