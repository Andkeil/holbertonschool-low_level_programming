#include "lists.h"

/**
 * get_dnodeint_at_index - return node at specified index
 * @head: list
 * @index: index to get
 *
 * Return: dlistint_t, NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

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
