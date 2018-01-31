#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - Print second half of string and a newline
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, length;

	length = _strlen(str);

	if (length % 2 != 0)
		for (i = (length - 1) / 2; i < length; i++)
			_putchar(str[i]);
	else
	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}

/**
 * _strlen - Return length of a string
 *
 * @s: pointer to string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while  (s[i] != '\0')
		i++;
	return (i);
}
