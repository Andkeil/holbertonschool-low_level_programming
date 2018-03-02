#include <stdio.h>
#include "lists.h"

/**
 * list_len - return number of elements in passed in linked list
 * @h: passed in link list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h = NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
