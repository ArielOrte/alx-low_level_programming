#include "main.h"

/**
 * _islower-checks for lowercase character
 * @c: is the int that we will use for the argument
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
			return (0);

}
