#include "sort.h"

/**
 * shell_sort - sort using shell sort algorithm
 * @array: the array
 * @size: the size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	long tmp;
	size_t gap = 1, i, j;

	if (array == NULL)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	for (gap = (gap - 1) / 3; gap >= 1; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
