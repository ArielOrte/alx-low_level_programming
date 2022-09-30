#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: counts arguments used
 * @argv: arguments used
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int pos, ttl, change, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = ttl = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ttl = atoi(argv[1]);

	if (ttl <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != '\0')
	{
		if (ttl >= coins[pos])
		{
		aux = (ttl / coins[pos]);
		change += aux;
		ttl -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
