#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Purpose - print the alphabet 10 times
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
