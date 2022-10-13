#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - perfoms the operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < b - 1)
		{
			printf(" ");
		}
		else
		{
		printf("\n");
		}
	}

	return (0);
}
