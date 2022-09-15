#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size parameter of a triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
			{
				_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
	
}
