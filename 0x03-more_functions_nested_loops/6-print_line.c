#include "holberton.h"

/**
 * print_line - print number of lines as specified
 * @n: number of lines to print
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
