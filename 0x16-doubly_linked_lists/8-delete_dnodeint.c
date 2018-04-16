#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specified index
 * @head: list passed in
 * @index: specified index
 *
 * Return: 1 if Success -1 if Failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delNode = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = delNode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(delNode);
		return (1);
	}
	while (i < index)
	{
		if (delNode == NULL)
			return (-1);
		delNode = delNode->next;
		i++;
	}
	delNode->prev->next = delNode->next;
	if (delNode->next != NULL)
		delNode->next->prev = delNode->prev;
	free(delNode);
	return (1);
}
