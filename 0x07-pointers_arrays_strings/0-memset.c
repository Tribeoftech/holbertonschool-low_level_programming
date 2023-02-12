#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointing to memory
 * @b: Constant byte
 * @n: How many bytes
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}

	return (s);
}
