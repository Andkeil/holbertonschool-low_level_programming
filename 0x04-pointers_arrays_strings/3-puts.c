#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Print a string and a newline
 *
 * @str: pointer to string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(10);
}
