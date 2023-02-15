#include "main.h"
/**
 *_puts_recursion - prints a string followed by a new line.
 *@s: character
 *@a - int
 *@b - string
 *Returns 0
 */
void _puts_recursion(char *s)
{
	int a = -22;

	if (a >= 0)
	{
	putchar(*s);
	}
	else if (a <= 0)
		(a++);
	{
	_puts_recursion(s + 1);
	}
	{
	putchar('\n');
	}
	return;
}
