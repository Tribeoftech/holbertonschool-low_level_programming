#include "function_pointers.h"

/**
 * int_index - Searchs for int in array
 * @array: Array of ints
 * @size: Size of array
 * @cmp: Pointer to func
 * Return: Index of the first element for cmp that doesn't return 0,
 * if no elements match it returns -1,
 * if sizxe <= 0, returns 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
