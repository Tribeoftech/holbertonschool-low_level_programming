#include "main.h"
/**
 * swap_int - Swaps the value of two ints
 * @a: First int
 * @b: Second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
