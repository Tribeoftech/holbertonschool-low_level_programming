#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array:  Array to iterate through
 * @size: Size of array
 * @action: Ptr to function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
		{
			(*action)(array[x]);
		}
	}
}
