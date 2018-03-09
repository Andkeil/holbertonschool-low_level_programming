#include "holberton.h"
#include <stdlib.h>

/**
 * flip_bits - Find how many bits to flip from one # to another
 * @n: passed in number
 * @m: other passed in number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xoint, counter = 0;

	xoint = (n ^ m);

	while (xoint)
	{
		if (xoint & 1)
			counter++;
		xoint >>= 1;
	}
	return (counter);
}
