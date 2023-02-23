#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a char in a str
 * @s: The string
 * @c: The char
 * Return: The character found or NULL if no char is found
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return ('\0');
		}
	}
}
