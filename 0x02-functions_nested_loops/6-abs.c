#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @i: The number passed in to check abs value of
 *
 * Return: integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	return (i);
}
