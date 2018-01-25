#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students.
 * @i: number checked if it's digit
 *
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
