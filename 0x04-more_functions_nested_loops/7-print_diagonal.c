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
			if (a == b)
			{
			_putchar(92);
			break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
