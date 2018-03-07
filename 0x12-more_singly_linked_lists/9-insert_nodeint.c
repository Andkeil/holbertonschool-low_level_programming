#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: the list passed in
 * @idx: index to insert the node
 * @n: number of the new node
 *
 * Return: listint_t, the new list with inserted new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_count = 0, counter = 0;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		node_count++;
		tmp = tmp->next;
	}
	if (node_count < idx)
	{
		free(new);
		return (NULL);
	}
	tmp = *head;
	if (counter == idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (counter != idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
