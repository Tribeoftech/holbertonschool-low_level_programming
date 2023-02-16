#include "main.h"

/**
 * _strpbrk - Searches for a set of bytes
 * @s: String
 * @accept: String
 * Return: Outputs the bytes that are shared by the two strs
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				return (&s[x]);
		}
	}
	return ('\0');
}
