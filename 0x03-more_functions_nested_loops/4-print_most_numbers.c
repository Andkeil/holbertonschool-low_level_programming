#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
		_putchar(ch);
	}
	_putchar(10);
}
