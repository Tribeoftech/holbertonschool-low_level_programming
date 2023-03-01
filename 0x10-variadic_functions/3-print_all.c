#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: list of types of arguments passed to function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, x;
	char *spacer = "";
	va_list strings;

	typecheck_t specifiers[] = {
		{'c', printchar},
		{'i', printint},
		{'f', printfloat},
		{'s', printstring},
		{'\0', NULL}
	};
	va_start(strings, format);

	while (format[i] != '\0' && format != NULL)
	{
	x = 0;
		while (specifiers[x].input != '\0')
		{
			if (format[i] == specifiers[x].input)
			{
				printf("%s", spacer);
				specifiers[x].formtype(strings);
				spacer = ", ";
			}
		x++;
		}
	i++;
	}
	printf("\n");
	va_end(strings);
}

/**
 * printchar - handles spec c
 * @strings: va_list
 */
void printchar(va_list strings)
{
	printf("%c", va_arg(strings, int));
}

/**
 * printint - handles spec i
 * @strings: va_list
 */
void printint(va_list strings)
{
	printf("%d", va_arg(strings, int));
}

/**
 * printfloat - handles spec f
 * @strings: va_list
 */
void printfloat(va_list strings)
{
	printf("%f", va_arg(strings, double));
}

/**
 * printstring - handles spec s
 * @strings: va_list
 */
void printstring(va_list strings)
{
	if (strings == NULL)
	{
		printf("(nil)");
	}
	printf("%s", va_arg(strings, char*));
}
