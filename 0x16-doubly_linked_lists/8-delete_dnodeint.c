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
	dlistint_t *delNode, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		delNode = *head;
		if (delNode->next != NULL)
			*head = delNode->next;
		else
			*head = NULL;
		free(delNode);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (i + 1 == index)
		{
			delNode = tmp->next;
			tmp->next = delNode->next;
			free(delNode);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
