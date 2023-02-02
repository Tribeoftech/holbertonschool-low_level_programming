#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers 0 to 9 with a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}

	putchar('\n');
}
