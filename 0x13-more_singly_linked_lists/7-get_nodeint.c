#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of node to locate
 * Return: NULL if the node does not exist else located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next
	}
	return (head);
}
