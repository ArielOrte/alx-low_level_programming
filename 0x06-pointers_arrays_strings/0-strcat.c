#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string that will append
 * @src: string to source
 * Return: Return a concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + dest_len) = *(src + i);
			dest_len++;
	}

	*(dest + dest_len) = *(src + i)

	return (dest);
}
