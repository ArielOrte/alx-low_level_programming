#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int range, i;
	int *ptr;

	range = 0;
	if (min > max)
	{
		return (NULL);
	}
	range = ((max + 1) - min);
	ptr = malloc(range * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		*(ptr + 1) = min + 1;
	}
	return (ptr);
}
