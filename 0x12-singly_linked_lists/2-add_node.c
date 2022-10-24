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
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen1(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen1 - returns the length of a string
 * @s: string
 * Return: length of @s
 */

int _strlen1(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen1(s + 1));
}
