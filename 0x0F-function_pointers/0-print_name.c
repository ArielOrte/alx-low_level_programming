#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
		f(name);
}