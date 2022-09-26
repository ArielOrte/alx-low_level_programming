#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int c, d, t1 = 0, t2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
	{
		t1 = t1 + a[c];
	}
	for (d = size - 1; d <= (size * size) - size; d = d + size - 1)
	{
		t2 = t2 + a[d];
	}
	printf("%d, %d\n", t1, t2);
}
