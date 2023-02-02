#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return : void
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
			putchar('0' + y / 10);
			}
			putchar('0' + y % 10);
		}
	putchar('\n');
	}
}
