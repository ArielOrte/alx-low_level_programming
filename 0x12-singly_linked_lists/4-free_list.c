#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
