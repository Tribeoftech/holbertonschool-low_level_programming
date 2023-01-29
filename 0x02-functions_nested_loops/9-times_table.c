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
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z < 10)
			{
				_putchar(z + '0');
			}
			else if (z > 9)
			{
				_putchar('1');
				_putchar((z % 10) + '0');
			}
			else if (z > 19)
			{
				_putchar('2');
				_putchar((z % 10) + '0');
			}
			else if (z > 29)
			{
				_putchar('3');
				_putchar((z % 10) + '0');
			}
			else if (z > 39)
			{
				_putchar('4');
				_putchar((z % 10) + '0');
			}
			else if (z > 49)
			{
				_putchar('5');
				_putchar((z % 10) + '0');
			}
			else if (z > 59)
			{
				_putchar('6');
				_putchar((z % 10) + '0');
			}
			else if (z > 69)
			{
				_putchar('7');
				_putchar((z % 10) + '0');
			}
			else if (z > 79)
			{
				_putchar('8');
				_putchar((z % 10) + '0');
			}
			_putchar(44);
			_putchar(32);
		}
	_putchar(10);
	}
}
