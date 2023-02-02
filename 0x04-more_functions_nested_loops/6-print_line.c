#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line
 * @n: Length of line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
