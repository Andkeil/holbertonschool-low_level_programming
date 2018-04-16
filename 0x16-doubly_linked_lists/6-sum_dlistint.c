#include "lists.h"

/**
 * sum_dlistint - sum numbers in linked list
 * @head: the head node
 *
 * Return: int sum of value of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
