#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - create array of ints
 *
 * @min: lowest value
 * @max: largest value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0;  min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
