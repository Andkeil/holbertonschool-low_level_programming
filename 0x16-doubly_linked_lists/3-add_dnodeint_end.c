#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: linked list head node
 * @n: value of new node
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL, *end;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = newNode;
	newNode->prev = end;
	return (newNode);
}
