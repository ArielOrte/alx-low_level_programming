#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer to address of first node
 * Return: 0 if the linked list is empty else n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (data);
}
