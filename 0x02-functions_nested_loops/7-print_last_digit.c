#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: The number passed in to check for it's last digit
 *
 * Return: 1 or 0.
 */

int print_last_digit(int i)
{
	int l;

	if (i < 0)
	{
		l = -1 * (i % 10);
	}
	else
	{
		l = (i % 10);
	}
	_putchar(l + '0');
	return (l);
}
