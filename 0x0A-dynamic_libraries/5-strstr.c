

#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: Where the substring is located
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	x = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] == haystack[x + y])
		{
			y++;
		}
		if (needle[y] == '\0')
			return (haystack + x);
	x++;
	}
	return ('\0');
}
