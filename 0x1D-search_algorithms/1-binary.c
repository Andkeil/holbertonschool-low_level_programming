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
		mid =  (min + max) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
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
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
