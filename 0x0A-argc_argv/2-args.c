#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: counts arguments used
 * @argv: arguments used
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
