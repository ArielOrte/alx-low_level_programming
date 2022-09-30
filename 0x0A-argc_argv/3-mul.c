#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: counts arguments used
 * @argv: arguments used
 * Return: If the program receives two arguments - 0
 * If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;

		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
