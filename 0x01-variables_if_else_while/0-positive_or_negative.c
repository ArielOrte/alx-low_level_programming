#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */

/**
 * main -prints a random number and states
 *       wether it is negative, positive or zero
 * Return: Always 0
 **/



/* This code prints out the value of the number */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2; /* This generates random numbers */

				/* your code goes there */

					if (n > 0)

					{

						printf("%d is positive\n", n);/* prints positive */

					} else if (n == 0)

					{

						printf("%d is zero\n", n);/* prints zero */

					} else

					{

						printf("%d is negative\n", n);/* prints negative */

					}

					/* Return: Always o */

					return (0);

}
