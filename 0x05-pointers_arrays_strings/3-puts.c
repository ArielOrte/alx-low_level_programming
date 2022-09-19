#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		putchar(*(s + l));
		l++;
	}

	putchar('\n');
}
