#include "hash_tables.h"

/**
 * hash_table_get - return values associated with the key
 * @ht: hash table
 * @key: the key
 *
 * Return: the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = hash_djb2((const unsigned char *)key) % ht->size;
	return (get_value(ht->array[i], key));
}

/**
 * get_value - returns value of the node matched with the key
 * @node: node
 * @key: key to check against
 *
 * Return: Returns the value
 */

char *get_value(hash_node_t *node, const char *key)
{
	hash_node_t *temp;

	temp = node;
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
