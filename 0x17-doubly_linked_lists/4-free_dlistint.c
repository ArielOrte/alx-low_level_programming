#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	dlistint_t *nxt;

	if (head)
	{
		curr = head;
		nxt = head->next;
		while (nxt)
		{
			free(curr);
			curr = nxt;
			nxt = nxt->next;
		}
		free(curr);
	}
}
