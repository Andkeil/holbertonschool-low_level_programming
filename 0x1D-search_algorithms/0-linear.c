#include "search_algos.h"

/**
 * linear_search - search for value linearly
 * @array: array to search
 * @size: size array
 * @value: value to find
 *
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
