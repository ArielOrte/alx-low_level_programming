#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum = sum + _strlen_recursion(s + 1);
	}
	return (sum);
}
