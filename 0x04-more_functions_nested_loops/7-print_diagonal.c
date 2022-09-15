#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
	for (a = 1; a <= n; a++)
		{
		for (b = 1; b <= n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if ((a == (n - 1))

			continue;

_putchar('\n');
		}
	}
	_putchar('\n');
}
