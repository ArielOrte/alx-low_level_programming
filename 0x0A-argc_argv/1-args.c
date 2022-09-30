#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: counts arguments used
 * @argv: arguments used
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
