#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary - print binary rep of number
 * @n: passed in number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 0, copy = n, j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		while (copy > 0)
		{
			copy >>= 1;
			j++;
		}
		for (i = j - 1; i >= 0; i--)
		{
			copy = n >> i;
			if (copy & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
