#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		if (i % 2 == 0)
		putchar(*(str + l));
		l++;
	}

	putchar('\n');
}
