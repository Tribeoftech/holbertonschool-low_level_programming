#include "main.h"

/**
* print_rev -  prints string in reverse, followed by new line
* @s: string
* Return: returns 0.
*/
void print_rev(char *s)
{
	int f1;
	int f2;

	for (f1 = 0; s[f1] != '\0'; f1++)
	{
		continue;
	}
	for (f2 = f1 - 1; f2 >= 0; f2--)
	{
		_putchar(s[f2]);
	}
	_putchar('\n');
}
