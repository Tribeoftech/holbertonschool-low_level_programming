#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
