#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete node at specified index
 * @head: list passed in
 * @index: specified index
 *
 * Return: 1 if Success -1 if Failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	while (tmp != NULL)
	{
		if (index == 0)
		{
			delNode = *head;
			*head = delNode->next;
			free(delNode);
			return (1);
		}
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
