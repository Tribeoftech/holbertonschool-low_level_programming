#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Integer holding the bit to change
 * @index: Where we are setting the bit to 0
 * Return: 1 if it works, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
