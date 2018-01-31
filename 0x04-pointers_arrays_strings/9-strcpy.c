#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Copy a string
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = _strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
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
