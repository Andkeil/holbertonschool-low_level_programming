#include "holberton.h"

/**
 * *_memcpy - copies the first n bytes of mem pointed to with *src
 *
 * @dest: destination mem area
 * @src: mem area to be copied
 * @n: number of bytes
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
