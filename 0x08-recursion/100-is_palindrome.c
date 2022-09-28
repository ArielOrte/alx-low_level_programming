#include "main.h"

/**
 * palindro1 - obtains length
 * @b: string
 * @l: integer to count length
 * Return: On success 1
 */

int palindro1(char *b, int l)
{
	if (*b == 0)
		return (l - 1);
	return (palindro1(b + 1, l + 1));
}
/**
 * palindro2 - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: On success 1.
 */

int palindro2(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindro2(a + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 */

int is_palindrome(char *s)
{
	int l;

	l = palindro1(s, 0);
	return (palindro2(s, l));
}
