#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes a node at a given position
 * @head: A pointer to the address of the first node
 * @index: index where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp = *head;
	unsigned int node;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}
