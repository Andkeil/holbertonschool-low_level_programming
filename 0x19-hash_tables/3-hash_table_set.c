#include "hash_tables.h"

/**
 * hash_table_set - setting a new node to the hash table
 * @ht: hash table
 * @key: new key
 * @value: new value
 *
 * Return: 1 success, 0 failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if (update_hash_key(&ht, key, value, i))
		return (1);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[i];
	ht->array[i] = newNode;
	return (1);
}

/**
 * update_hash_key - if key exists, update the value
 * @ht: address of the hash table
 * @key: key
 * @value: new value
 * @index: the index of the array
 *
 * Return: 1 success, 0 fail
 */

int update_hash_key(hash_table_t **ht, const char *key, const char *value,
		    unsigned long int index)
{
	hash_node_t *newNode;

	if (!(*ht)->array[index])
		return (0);

	if (node_exists(&(*ht)->array[index], key, value))
	{
		return (1);
	}
	else
	{
		newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
		newNode->key = strdup(key);
		if (newNode->key == NULL)
		{
			free(newNode);
			return (0);
		}
		newNode->value = strdup(value);
		if (newNode->value == NULL)
		{
			free(newNode->key);
			free(newNode);
			return (0);
		}
		newNode->next = (*ht)->array[index];
		(*ht)->array[index] = newNode;
		return (1);
	}
	return (0);
}
/**
 * node_exists - check of the node exists in the linked list
 * @node: the node to check
 * @key: key
 * @value: new value
 * Return: 1 success, 0 fail
 */
int node_exists(hash_node_t **node, const char *key, const char *value)
{

	hash_node_t *temp;

	temp = *node;
	while ((strcmp(key, temp->key) != 0) && temp->next != NULL)
	{
		temp = temp->next;
	}
	if (strcmp(key, temp->key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		return (1);
	}
	return (0);
}
