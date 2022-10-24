#include "lists.h"

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
	{
		new->len = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
