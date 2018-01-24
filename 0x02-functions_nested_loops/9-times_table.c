#include "holberton.h"

/**
 *times_table - prints a 9-times table
 *
 * purpose - print times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;
	i = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if ((i * j) > 9)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			if (j != 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
			}
}
