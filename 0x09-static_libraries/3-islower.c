#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: assigned a char
 * Return: no return
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
