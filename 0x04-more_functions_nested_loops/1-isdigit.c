#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: tested character
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
