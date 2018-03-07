#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free list
 * @head: list to free
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
