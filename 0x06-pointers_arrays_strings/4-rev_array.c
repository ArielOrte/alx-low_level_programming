#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elemnte
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;


	for ( ; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
