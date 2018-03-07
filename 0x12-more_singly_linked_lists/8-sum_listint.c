#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sums up list
 * @head: list
 *
 * Return: int, sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
