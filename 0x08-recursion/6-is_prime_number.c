#include "main.h"

/**
 * prime2 - returns 1 if n is prime number
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 if n is prome, 0 if otherwise
 */

int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - returns 1 if n is prime number
 * @n: number to be checked
 * Return: On success 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
