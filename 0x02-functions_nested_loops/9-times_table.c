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
			if (y == 0)
			{
				_puthar('0');
			}	
			else if (z < 10)
			{
			        _putchar(' ');
			        _putchar(' ');
			        _putchar(' ');
			        _putchar('z + '0');
			}
		        else
			{
			        _putchar(' ');
			        _putchar(' ');
			        _putchar((z / 10) + '0');
			        _putchar((z % 10) + '0');
			}
		}
	_putchar('\n');
	}        	
}
