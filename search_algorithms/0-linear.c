#include "search_algos.h"
#define s
#if
/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithim
 * @array: Pointer to first element in array
 * @size: Size of array
 * @value: Value to be found
 * Return: First index where value is located or -1 if value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int iterator = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", iterator, array[i]);
		if (array[i] == value)
			return (i);
		iterator++;
	}
	return (-1);
}

#endif
