#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: is the int that we will use for the argument
 * Return: 1 if true and 0 if false
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);

}
