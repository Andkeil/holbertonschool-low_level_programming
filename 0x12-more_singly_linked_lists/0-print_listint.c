#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of list_t passed in
 * @h: passed in linked list
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t *tmp;
	int i = 0;
	tmp = *h;

	while (tmp != NULL)
	{
		printf("%d\n", h->n);
		tmp = h->next;
		i++;
	}
	return (i);
}
