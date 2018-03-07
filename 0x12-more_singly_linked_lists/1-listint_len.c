#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements of list_t passed in
 * @h: passed in linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
