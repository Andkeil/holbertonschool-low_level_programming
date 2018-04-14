#include "lists.h"

/**
 * dlistint_len - return number of elements in list
 * @h: the head node
 *
 * Return: size_t number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
