#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, new_size, j;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (new_size = size - 1; new_size > 0; new_size--)
	{
		for (i = 0, j = 1; j <= new_size; i++, j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
