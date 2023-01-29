#include "main.h"
#include <stdio.h>

/**
 * main- success
 * Description: prints alphabet, upper, or lower,parameter or member
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
