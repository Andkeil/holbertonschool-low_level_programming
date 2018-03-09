#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert binary string to int
 * @b: binary string
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		else if (b[i] == '1')
		{
			sum <<= 1;
			sum += 1;
		}
		else
		{
			sum <<= 1;
		}
		i++;
	}
	return (sum);
}
