#include "main.h"

/**
 * _strncat - concatenates two strings but add inputed number of bytes
 * @dest: string that will append
 * @src: string to source
 * @n: parameter to compare index to
 * Return: Return a concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];

	}


	return (dest);
}
