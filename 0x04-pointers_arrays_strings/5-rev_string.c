#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse the string
 *
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length, i, j;
	char tmp[500];

	length = _strlen(s);

	for (i = 0; i < length; i++)
	{
		tmp[i] = s[i];
	}
	for (i = 0, j = length - 1; i < length; i++, j--)
		s[i] = tmp[j];
	s[length] = '\0';
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
