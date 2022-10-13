#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - prints each array element
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
