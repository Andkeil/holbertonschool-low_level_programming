#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - function to concat strings
 *
 * @dest: string pointer
 * @src: string pointer
 * @n: byte limit
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, start;

	start = _strlen(dest);

	for (i = start, j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	return (dest);
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
