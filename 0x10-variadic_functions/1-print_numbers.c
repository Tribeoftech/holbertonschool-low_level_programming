#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Ints passed
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);
	if (n != 0)
	{
		for (x = 0; (x < n - 1); x++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d", va_arg(list, int));
			}
		}
		printf("%d", va_arg(list, int));
		va_end(list);
	}
	printf("\n");
}
