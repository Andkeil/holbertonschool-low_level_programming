#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node to the start of a list
 * @head: passed in linked list starting point
 * @str: string to dupe
 *
 * Return: size_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * _strlen - get string length
 * @s: passed in string
 *
 * Return: string length int
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
