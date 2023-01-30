/*
 * File: 9-times_table.c
 *
 *
*/
#include "main.h"
#include <stdio.h>
/**
 * times_table - see description
 * Description: Print times tables to 9
 * Return: void
*/
void times_table(void)
{
	int a, b, x, y;
	int z = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			a = z / 10;
			b = z % 10;
			if (z > 9)
			{
				_putchar(a + '0');
			}
			if (z < 10 && y > 0)
			{
				_putchar(' ');
			}
			_putchar(b + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			z = z + x;
		}
	_putchar('\n');
	z = 0;
	}
}
