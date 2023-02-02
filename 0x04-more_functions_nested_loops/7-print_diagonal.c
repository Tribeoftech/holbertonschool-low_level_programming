#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: distance of line
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(' ');
			}
		putchar('\\');
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
