#include "lists.h"
/**
 * print_listint - prints elements of list
 * Description: prints all the elements of a listint_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t i = 0;

	for (; p; p = p->next)
	{
		printf("%d\n", p->n);
		i++;
	}
	return (i);
}
