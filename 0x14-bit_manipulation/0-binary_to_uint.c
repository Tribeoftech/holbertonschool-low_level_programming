#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	if (b == NULL)
		return (0);

	for (x = 0; *b; b++)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			break;
	}
	return (x);
}
