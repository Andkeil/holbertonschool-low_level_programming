#include "sort.h"

/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 * the Quick sort algorithm using Hoare's partition scheme
 * @array: starting array
 * @size: size of array
 * Return: none
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort_hoare(array, 0, size - 1, size);
}
/**
 * quickSort_hoare - Quick sort algorithm
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the array
 * Return: none
 */
void quickSort_hoare(int *a, size_t l, size_t h, size_t size)
{
	size_t p;

	if (h == 0 || h <= l)
		return;

	p = partition_hoare(a, l, h, size);
	if ((p > l && p < size) && p != 0)
		quickSort_hoare(a, l, p, size);
	if (p < size - 1)
		quickSort_hoare(a, p + 1, h, size);
}
/**
 * partition_hoare - Hoare partition scheme
 * @a: array to sort
 * @l: first index of the array
 * @h: last index of the array
 * @size: size of the array
 * Return: none
 */
size_t partition_hoare(int *a, size_t l, size_t h, size_t size)
{
	size_t i, j, tmp;
	int pivot = a[h];

	i = l - 1;
	j = h + 1;

	while (1)
	{
		do
			i++;
		while (a[i] < pivot);
		do
			j--;
		while (a[j] > pivot);
		if (i > j)
			return (j);
		if (i == j)
			return (j - 1);

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		print_array(a, size);
	}
}
