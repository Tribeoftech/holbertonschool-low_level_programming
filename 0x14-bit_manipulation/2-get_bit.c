#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to be evaluated
 * @index: What bit to return
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}

