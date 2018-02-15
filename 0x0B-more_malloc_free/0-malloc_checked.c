#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - check if malloc failed
 *
 * @b: mem to allocate
 *
 * Return: pointer to mem allocated
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (void *)malloc(b);
	if (p == NULL || b == 0)
	{
		exit(98);
	}
	return (p);
}
