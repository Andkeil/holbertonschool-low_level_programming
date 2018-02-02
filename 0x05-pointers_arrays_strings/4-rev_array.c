#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse an array
 *
 * @a: int array
 * @n: number of elements to swap
 *
 * Return: pointer
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
