#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First parameter
 * @b: second parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int hold = *a;

	*a = *b;
	*b = hold;
}
