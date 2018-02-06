#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of all diagonal vals in square matrix
 *
 * @a: array of values
 * @size: height and width of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, mem;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		mem = size * i;
		sum1 += *(a + (mem + i));
		sum2 += *(a + (mem + size - i -1));
	}
	printf("%d, %d\n", sum1, sum2);
}
