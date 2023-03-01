#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to print
 * @n: Number of strings passed
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *tmp;
	va_list list;
	unsigned int x;

	if (n != 0)
	{
	va_start(list, n);
		for (x = 0; x < n; x++)
		{
			tmp = (va_arg(list, char*));
			if (tmp == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", tmp);
			}
			if (separator != NULL && x != (n - 1))
			{
				printf("%s", separator);
			}
		}
		va_end(list);
	}
	printf("\n");
}
