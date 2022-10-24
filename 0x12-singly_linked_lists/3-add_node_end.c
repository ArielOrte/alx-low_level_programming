#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: NULL if function fails
 *		otherwise address of new elemnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cp;
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	cp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
	{
		i++;
	}
	new->str = cp;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new
	}

	return (*head);
}
