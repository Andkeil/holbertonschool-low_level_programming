#include <stdio.h>
/**
 * swap - Change values using pointers
 *
 * @a: first pointer value
 * @b: second pointer value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
