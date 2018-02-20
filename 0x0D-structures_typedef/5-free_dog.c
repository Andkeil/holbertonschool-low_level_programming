#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free values of dog
 * @d: dog pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
