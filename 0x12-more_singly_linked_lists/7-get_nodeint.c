#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - return node at specified index
 * @head: list
 * @index: index to get
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;
	while (i != index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
