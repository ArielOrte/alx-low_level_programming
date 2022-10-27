#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: A pointer to the address of the first node
 * @idx: index where the new node should be added
 * @n: The integer for the new node to contain
 * Return: NULL if function fails else
 * the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
