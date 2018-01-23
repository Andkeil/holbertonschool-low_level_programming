#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * print out the time of day minute by minute
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
		}
}
