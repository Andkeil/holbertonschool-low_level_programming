#include "lists.h"

/**
 * add_dnodeint - add a node at the start of a linked list
 * @head: linked list head node
 * @n: value of new node
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = newNode;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = (*head);
	(*head)->prev = newNode;
	*head = newNode;
	return (*head);
}
