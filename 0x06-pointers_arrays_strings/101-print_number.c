#include "main.h"

/**
 * print_number - that prints an integer
 * @n: number to string
 * Returnn: nothing
 */

void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -numb;
	}
	if ((numb / 10) > 0)
	{
		_putchar(numb / 10)
	}
	_putchar((numb % 10) + '0');
}
