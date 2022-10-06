#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - used to allocate memory
 * @b: the size to allocate
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
