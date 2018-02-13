#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creating an array using malloc
 *
 * @size: size the array
 * @c: character to copy
 *
 * Return: char array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
