#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its paremeters
 * @n: number of arguments to be served
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list alist;

	if (n == 0)
		return (0);

	va_start(alist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(alist, int);
	}
	va_end(alist);

	return (sum);
}
