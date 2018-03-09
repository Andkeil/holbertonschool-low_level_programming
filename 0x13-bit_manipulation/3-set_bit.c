#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - set bit value at given index
 * @n: passed in number
 * @index: index to set value at
 *
 * Return: value at index or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
