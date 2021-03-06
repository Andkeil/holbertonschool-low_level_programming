#include "holberton.h"

/**
 * *_memset - fills the first n bytes of mem pointed to with char
 *
 * @s: buffer
 * @b: constant byte
 * @n: number of bytes
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
