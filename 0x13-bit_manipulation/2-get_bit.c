#include "holberton.h"
#include <stdlib.h>

/**
 * get_bit - return value of bit at index
 * @n: passed in number
 * @index: Index to get value from
 *
 * Return: bit at index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int copy = n, j = 0;

	while (copy != 0)
	{
		copy >>= 1;
		j++;
	}
	if (index >= j)
		return (-1);
	copy = n >> index;
	if (copy & 1)
		return (1);
	else
		return (0);

}
