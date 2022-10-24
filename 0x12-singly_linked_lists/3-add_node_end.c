#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: address of new elemnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
	{
		;
	}
	new->len = i;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
