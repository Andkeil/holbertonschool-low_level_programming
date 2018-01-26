#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else if (size > 0)
	for (i = (size - 1); i >= 0; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= i)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar(10);
	}
}
