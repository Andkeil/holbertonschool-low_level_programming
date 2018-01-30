#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse
 *
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, length;

	length = _strlen((char *)s);
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}

/**
 * _strlen - helper function return length of a string
 *
 * @s: pointer to string
 *
 * Return: string
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
