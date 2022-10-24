#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: NULL if function fails
 *		otherwise address of new elemnt
 */

list_t *add_node(list_t **head, const char *str)
{
	char *cp;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	cp = strdup(str);
	if (cp == NULL)
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
	new->next = *head;

	*head = new;

	return (new);
}
