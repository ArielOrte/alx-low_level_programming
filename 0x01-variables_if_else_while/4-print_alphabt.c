#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Always o
 */

/* betty style doc for function main goes there */
int main(void)

{

char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)

{
	if (alphabets == 'q')
		continue;

	if (alphabets == 'e')
		continue;
putchar(alphabets);
}


putchar('\n');
return (0);


}
