#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the sum of arguments passed to it
 * @argc: counts arguments used
 * @argv: arguments used
 * Return: numbers contains symbols that are non-digits - 1
 * else - 0
 */

int main(int argc, char *argv[])
{
	int a, d, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (d = 0; argv[a][d]; d++)
		{
			if (argv[a][d] < '0' || argv[a][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
