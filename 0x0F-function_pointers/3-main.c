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
	int arg1 = 0, arg2 = 0, ans = 0;
	char get;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	get = argv[2][0];
	if (get != '+' && get != '-' && get != '/' && get != '*' && get != '%')
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	ans = (get_op_func(argv[2]))(arg1, arg2);

	printf("%d\n", ans);

	return (0);
}
