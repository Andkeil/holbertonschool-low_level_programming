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
	tmp = *h;
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
