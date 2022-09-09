#include <stdio.h>



/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always o
 */



/* betty style doc for function main goes there */

int main(void)
{

		char lower_case;



			for (lower_case = 'z'; lower_case >= 'a'; lower_case--)
			{
			putchar(lower_case);
			}


			putchar('\n');


			return (0);

}
