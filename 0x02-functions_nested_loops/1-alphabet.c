#include "main.h"
#include <stdio.h>

/**
 * main - success
 *
 *@_print_alphabet - prints alphabet as a prototype to the main functioon
 *@p the character to 'print' the alphabet!
 * Return 0 if successful
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
