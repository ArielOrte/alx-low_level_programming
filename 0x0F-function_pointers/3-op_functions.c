#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference
 * @a: first integer
 * @b: second integer
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two numbers
 * @a: first integer
 * @b: second integer
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the two numbers
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
