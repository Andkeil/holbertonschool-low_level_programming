#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - Allocate memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
