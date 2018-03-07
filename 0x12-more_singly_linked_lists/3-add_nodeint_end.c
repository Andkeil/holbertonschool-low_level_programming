#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node to end of list
 * @n: data for node
 * @head: start of list
 *
 * Return: addr of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->next = NULL;
	return (new);
}
