#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: char to code
 * Return: a
 */

char *leet(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = transform(a[i]);
		i++;
	}
	return (a);
}

/**
 * transform - helper fonction to map letter with leet encoding
 * @x: character to be encoded
 * Return: the encoded character
 */

char transform(char x)
{
	char low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == low[i] || x == upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);

}
