#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array of size ac
 * Return: NULL if ac == 0 or av == NULL
 * ponter to new string
 * NULL on fail
 */

char *argstostr(int ac, char **av)
{
	int i, a, b, size;
	char *arr;

	size = 0;
	b = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a])
		{
			size++;
			a++;
		}
		size++;
		i++;
	}
	arr = malloc((sizeof(char) * size) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a])
		{
			arr[b] = av[i][a];
			a++;
			b++;
		}
		arr[b] = '\n';
		b++;
		i++
	}
	arr[b] = '\0';
	return (arr);
}
