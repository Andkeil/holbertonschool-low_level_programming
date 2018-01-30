#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - Print every other char and a newline
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, length;

	length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
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
