#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string followed by new line.
 *
 * @str: string
 * Returns: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half_length = (len - 1) / 2 + 1;
	int i = len - half_length;

	while (i < len)
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
