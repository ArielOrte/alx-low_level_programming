#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: bit pointer
 * @index: position to set the value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	a = 1 << index;
	*n &= ~a;

	return (1);

}
