#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* followed by new line
* @a: array to be printed
* @n: number of elements to print
*/
void print_array(int *a, int n)
{
	int f1;

	for (f1 = 0; f1 < n; f1++)
	{
		if (f1 == 0)
			printf("%d", a[f1]);
		else
			printf(", %d", a[f1]);
	}
		printf("\n");
}
