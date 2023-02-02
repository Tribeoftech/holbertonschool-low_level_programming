#include "main.h"

/**
 * print_square - Prints a square with a new line
 * @size: Size of the square
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
