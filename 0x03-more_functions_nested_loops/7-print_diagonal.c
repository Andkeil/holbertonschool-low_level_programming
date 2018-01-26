#include "holberton.h"

/**
 * print_diagonal - print slashes in diagonal
 * @n: number of diagonals to print
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
				break;
			}
			else
				_putchar(32);
		}
		_putchar(10);
	}
}
