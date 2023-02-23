#include "main.h"

/**
 * _strncpy - Copies a string
 * @src: The string to copy
 * @dest: Where it is copied to
 * @n: Length of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
