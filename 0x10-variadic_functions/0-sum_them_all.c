#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Sums all ints in parameter
 * @n: Ints passed
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (count = 0; count < n; count++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
