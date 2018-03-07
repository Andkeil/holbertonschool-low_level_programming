#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node to start of list
 * @n: data for node
 * @head: start of list
 *
 * Return: addr of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
