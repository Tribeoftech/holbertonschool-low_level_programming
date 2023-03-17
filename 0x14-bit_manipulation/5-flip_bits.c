#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: First evaluated integer
 * @m: Second evaluted integer
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - Counts the bits to flip
 * @n: The flipping number
 * Return: Count of bits flipped
 */

unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
