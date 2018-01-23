#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @i: The number passed in to check if it's a letter
 *
 * Return: 1 or 0.
 */

int _isalpha(int i)
{
	if ((i > 96 && i < 123) || (i > 64 && i < 91))
	{
		return (1);
	}
		return (0);
}
