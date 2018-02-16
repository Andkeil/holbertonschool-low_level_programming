#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - Reallocate the memory of a given pointer
 *
 * @ptr: Given pointer to a mem space
 * @old_size: Byte size of given pointer
 * @new_size: Byte size of reallocated memory block
 *
 * Return: Reallocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr, *cpyptr, *ptr2;

	ptr2 = (char *)ptr;
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (newptr);

	cpyptr = newptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			cpyptr[i] = ptr2[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			cpyptr[i] = ptr2[i];
	}
	free(ptr);
	return (cpyptr);
}
