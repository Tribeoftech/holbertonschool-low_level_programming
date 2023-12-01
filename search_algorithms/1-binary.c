#include "search_algos.h"

/**
 * print_arr - Prints array as per requested by task
 * @array: Array to print
 * @start_index: Lowest index in array
 * @last_index: highest index in array
 */

void print_arr(int *array, size_t start_index, size_t last_index)
{
	size_t x = start_index;

	printf("Searching in array: ");
	for (; x <= last_index; x++)
	{
		printf("%d", array[x]);
		if (x != last_index)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithim
 * @array: Pointer to first element in array
 * @size: Size of array
 * @value: Value to be found
 * Return: Index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start_index = 0;
	size_t last_index = size - 1;
	size_t mid_index;

	if (array == NULL)
		return (-1);

	while (start_index <= last_index)
	{
		mid_index = (start_index + last_index) / 2;
		print_arr(array, start_index, last_index);

		if (array[mid_index] == value)
			return (mid_index);
		else if (array[mid_index] < value)
			start_index = mid_index + 1;
		else
			last_index = mid_index - 1;
	}

	return (-1);
}