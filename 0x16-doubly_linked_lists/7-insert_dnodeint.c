#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: the list passed in
 * @idx: index to insert the node
 * @n: number of the new node
 *
 * Return: dlistint_t, the new list with inserted new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp, *new = NULL;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = (*h);
	if (idx == 0)
	{
		new->next = (*h);
		(*h) = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (idx != 0 && i == idx - 1)
			break;
		tmp = tmp->next;
		i++;
	}
	if (idx > i + 1)
	{
		free(new);
		return (NULL);
	}
	if (tmp->next == NULL)
	{
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
