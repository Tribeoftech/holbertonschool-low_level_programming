#include "main.h"
/**
 * print_triangle - Prints a triangle with a new line
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size - (x + 1); y++)
			{
				putchar(' ');
			}
		for (z = 0; z < x + 1; z++)
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
