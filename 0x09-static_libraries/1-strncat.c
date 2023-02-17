#include "main.h"

/**
 * _strncat - Combines two strings
 * @dest: One of the two strings to combine
 * @src: One of the two strings to combine
 * @n: amount of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
