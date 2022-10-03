#include "main.h"
#include <stdlib.h>

/**
 * _strdup-function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: copy of the string given as a parameter
 * Return: NULL if size = 0 or pointer to the array
 */

char *_strdup(char *str)
{
	char *dstr;
	unsigned int len, i;

	if (str == 0)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	dstr = malloc((len + 1) * sizeof(char));

	/*check if malloc was correct*/

	if (dstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dstr[i] = str[i];
	}
	dstr[len] = '\0';
	return (dstr);
}
