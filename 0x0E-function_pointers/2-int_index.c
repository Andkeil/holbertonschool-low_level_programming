#include <stdlib.h>

/**
 * int_index - returns first matching index
 * @array: array to compare with
 * @size: array size
 * @cmp: function passed in to compare numbers
 *
 * Return: -1 for fail, index for match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
