#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - free the list passed in
 * @head: linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
