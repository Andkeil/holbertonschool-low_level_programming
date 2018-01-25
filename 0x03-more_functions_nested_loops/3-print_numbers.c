#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: void.
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
		_putchar(ch);
	_putchar(10);
}
