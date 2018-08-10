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
	int min, max, mid;

	min = 0;
	max = size - 1;
	while (min <= max)
	{
		binary_print(array, min, max);
		mid = (min + max) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
		{
			max = mid;
		}
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
	if (start > end)
		return;
	printf("Searching in array: ");
	while (start < end)
	{
		printf("%u, ", array[start]);
		start++;
	}
	printf("%u\n", array[start]);
}
