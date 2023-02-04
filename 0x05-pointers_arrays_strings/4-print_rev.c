#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
