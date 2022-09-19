#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b, c, tmp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
	tmp = s[c];
	s[c] = s[b];
	s[b] = tmp;
	c++;
	b--;
	}


}
