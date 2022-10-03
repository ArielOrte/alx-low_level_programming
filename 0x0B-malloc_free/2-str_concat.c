#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *dstr;
	unsigned int len1, len2, i, j, size;

	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	size = len1 + len2;
	dstr = malloc((size + 1) * sizeof(char));
	/*check if malloc was correct*/
	if (dstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		dstr[i] = s1[i];
		for (j = 0; j <= size; j++)
		{
			dstr[i] = s2[j];

		}
	}
	return (dstr);
}
