#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @i: number checked if it's lowercase
 *
 * Return: 1 or 0.
 */

int _islower(int i);
{
	if (i > 96 && i < 123)
	{
		return (1);
	}
	return (0);
}
