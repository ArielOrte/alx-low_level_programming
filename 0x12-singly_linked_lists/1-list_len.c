#include "lists.h"

/**
 * list_len - A function that returns the number
 * of elements in a linked list_t list
 * @h: pointer to the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
