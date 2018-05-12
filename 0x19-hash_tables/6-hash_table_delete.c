#include "hash_tables.h"

/**
 * hash_table_delete - prints the hash table
 * @ht: the hash table
 *
 * Return - None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp, *temp2;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
