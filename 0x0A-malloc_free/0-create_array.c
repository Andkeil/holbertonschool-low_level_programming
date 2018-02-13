#include "holberton.h"
#include <stdlib.h>

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
	int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	for (i = 0; i < (signed int) size; i++)
	{
		*(p + i) = c;
	}
	if (p == NULL)
		return (NULL);
	else
	return (p);
}
