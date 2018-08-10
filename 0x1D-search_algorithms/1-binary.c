#include "search_algos.h"

/**
 * binary_search - binary search algo
 * @array: array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		return (binary_recursive(array, 0, size - 1, value));
	}
	return (-1);
}

/**
 * binary_recursive - binary search recursively
 * @array: array to search
 * @min: start index
 * @max: end index
 * @value: value to find
 *
 * Return: index of value or -1
 */

int binary_recursive(int *array, size_t min, size_t max, int value)
{
	int mid = min + (max - min) / 2;

	binary_print(array, min, max);
	if (array[mid] == value)
		return (mid);
	if (max >= min)
	{
		if (array[mid] > value)
			return (binary_recursive(array, min, mid - 1, value));
		return (binary_recursive(array, mid + 1, max, value));
	}
	return (-1);
}

/**
 * binary_print - print array while performing binary search
 * @array: array to print
 * @start: start index
 * @end: end index
 *
 * Return: Void
 */

void binary_print(int *array, size_t start, size_t end)
{
	size_t i;

	if (start > end)
		return;
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
