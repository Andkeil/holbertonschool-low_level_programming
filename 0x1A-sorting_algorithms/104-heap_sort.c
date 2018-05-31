#include "sort.h"

/**
 * heap_sort - sort an array using the heap sort algorithm
 *
 * @array: int array to sort
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	build_heap(array, size);
	heap_sorting(array, size, size - 1);
}

/**
 * build_heap - builds a max heap out of the array
 *
 * @array: array of integers
 * @size: number of elements in array
 */
void build_heap(int *array, size_t size)
{
	int i;

	for (i = size / 2; i >= 0; i--)
		heapify(array, size, size - 1, i);
}

/**
 * heapify - builds a max heap out of the array
 *
 * @array: array of integers
 * @i: index of current node
 * @last: last unsorted node index
 * @size: number of elements in array
 */
void heapify(int *array, size_t size, size_t last, size_t i)
{
	size_t  largest, left, right;

	left = (2 * i + 1);
	right = ((2 * i) + 2);

	if (left > last)
		return;
	if (right <= last && array[right] > array[left])
		largest = right;
	else
		largest = left;
	if (array[largest] > array[i])
	{
		swap(array, size, largest, i);
		heapify(array, size, last, largest);
	}
}

/**
 * swap - swaps array elements and handles in progress printing
 *
 * @array: array
 * @size: number of elements in array
 * @findex: first index to swap
 * @sindex: second index to swap
 */
void swap(int *array, size_t size, size_t findex, size_t sindex)
{
	int tmp;

	tmp = array[findex];
	array[findex] = array[sindex];
	array[sindex] = tmp;
	print_array(array, size);
}

/**
 * heap_sorting - recursive helper for heap sort
 *
 * @array: array of integers
 * @size: number of elements in array
 * @last: index of last element of heap
 */
void heap_sorting(int *array, size_t size, size_t last)
{
	if (last == 0)
		return;
	swap(array, size, 0, last);
	last--;
	heapify(array, size, last, 0);
	heap_sorting(array, size, last);
}
