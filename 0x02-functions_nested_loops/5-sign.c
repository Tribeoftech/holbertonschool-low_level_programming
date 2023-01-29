#include "main.h"
/**
 * print_sign - entry point
 *
 * Description: Returns one if C is a letter, or 0 if not.
 * @n: character to check
 * Return: void
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	}

