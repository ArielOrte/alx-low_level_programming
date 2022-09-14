#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0
 */

int main(void)
{
	char ch[8] = "_putchar";

	int i = 0;
		while (i < 8)
		{

			_putchar(ch[i]);
			i++;
		}
	_putchar('\n');
	return (0);
}
