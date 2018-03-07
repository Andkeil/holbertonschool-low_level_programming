#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free list
 * @head: list to free
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL && *head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
