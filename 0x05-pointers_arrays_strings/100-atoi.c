#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a character string
 * Return: number and sign
 */

int _atoi(char *s)
{
	int i = 0, convert = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		convert = convert * 10 + s[i] - '0';
	}
	return (convert);
}
