#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
	{
		putchar(*(s + l));
	}

	putchar('\n');
}
