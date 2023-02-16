# include "main.h"
# include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
	length++;
	}
	return (length);
}
