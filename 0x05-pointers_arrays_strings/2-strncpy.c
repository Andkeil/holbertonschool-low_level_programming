#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - function to copy strings
 *
 * @dest: string pointer
 * @src: string pointer
 * @n: byte limit
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
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
