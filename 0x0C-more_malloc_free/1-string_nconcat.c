#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes
 * Return: NULL if function fails
 * else a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *ptr;
	unsigned int l = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		l++;
	}

	ptr = malloc(sizeof(char) * (l + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		ptr[l++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		ptr[l++] = s2[i];
	}

	ptr[l] = '\0';

	return (ptr);
}
