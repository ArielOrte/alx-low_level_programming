#include <stdio.h>

/**
 * main -prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always o
 */


/* betty style doc for function main goes there */

int main(void)
{

	int n;

	char lower_case;



	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
	{
		putchar(lower_case);
	}


	putchar('\n');



	return (0);

}
