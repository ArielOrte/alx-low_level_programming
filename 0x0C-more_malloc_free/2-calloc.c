#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the number of members
 * @size: the size
 * Return: nmemb or size is 0, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l = nmemb * size;

	ptr = malloc(l);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
