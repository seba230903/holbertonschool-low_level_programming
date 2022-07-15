#include "lists.h"
/**
 * free_list - frees list
 * Description: frees a list
 * @head: pointer ro list
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
	free(head);
}
