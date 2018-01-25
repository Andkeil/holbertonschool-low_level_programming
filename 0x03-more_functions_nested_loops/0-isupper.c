#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @i: number checked if it's uppercase
 *
 * Return: 1 or 0.
 */

int _isupper(int i)
{
	if (i > 64 && i < 91)
	{
		return (1);
	}
	return (0);
}
