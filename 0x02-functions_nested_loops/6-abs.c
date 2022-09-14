#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int that we will use for the argument
 * Return: 1 if true and 0 if false
 */

int _abs(int c)
{
		if (c > 0 || c == 0)
		{
			return (c);
		}
		else
			return (c * -1);

}
