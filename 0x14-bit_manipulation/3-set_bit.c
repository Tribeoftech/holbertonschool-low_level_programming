#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Integer that holds our bits
 * @index: What bit to set to 1
 * Return: 1 if worked, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
