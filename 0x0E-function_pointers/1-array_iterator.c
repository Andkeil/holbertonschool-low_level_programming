#include <stdio.h>
/**
 * array_iterator - execute function on each array element
 *
 * @array: array
 * @size: size of array
 * @action: function to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
