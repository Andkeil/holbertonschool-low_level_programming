#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - function to concat strings
 *
 * @dest: string pointer
 * @src: string pointer
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j, start;

	start = _strlen(dest);

	for (i = start, j = 0; src[j] != '\0'; i++, j++)
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
