#include "lists.h"
/**
 * add_node_end - adds new node at the end of the list
 * Description: adds a new node at the end of a list
 * @head: pointer to list
 * @st: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while ( p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (*head);
}
