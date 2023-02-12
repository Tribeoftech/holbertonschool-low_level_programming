#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of
 * a square matrix
 * @a: array of values
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1;
	int sum2;

	for (x = 0, sum2 = 0; x < (size * size); x += (size + 1))
	{
		sum2 += a[x];
	}

	for (x = (size - 1), sum1 = 0; x < (size * size) - size + 1; x += (size - 1))
	{
		sum1 += a[x];
	}
	printf("%d, %d\n", sum2, sum1);
}
