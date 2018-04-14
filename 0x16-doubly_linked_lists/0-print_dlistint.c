#include "lists.h"

/**
 * print_dlistint - print numbers in linked list
 * @h: the head node
 *
 * Return: size_t number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
