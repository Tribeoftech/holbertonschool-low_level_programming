#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - Appends a string to another, overwriting the
 * null byte, and then adding a new one
 * @src: The string to append
 * @dest: Where the string is being appended to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
