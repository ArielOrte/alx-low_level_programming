#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: point of unsigned long int
 * @index: position of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	a = 1 << index;
	*n ^= a;

	return (1);
}
