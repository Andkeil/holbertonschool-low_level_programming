#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - pop head off of list
 * @head: list
 *
 * Return: the integer popped off
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);

	tmp = (*head);
	*head = NULL;
	*head = tmp->next;
	num = tmp->n;
	free(tmp);
	return (num);
}
