#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of list_t passed in
 * @h: passed in linked list
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
