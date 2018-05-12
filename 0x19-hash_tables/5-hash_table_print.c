#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 *
 * Return - None
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i, j, count, count2;

	if (!ht || !ht->array)
		return;
	i = 0, j = 0, count = 0, count2 = 0;

	while (j < ht->size)
	{
		temp = ht->array[j];
		while (temp)
		{
			count++;
			temp = temp->next;
		}
		j++;
	}
	if (count > 0)
		printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp)
		{
			while (temp)
			{
				if (count2 != count - 1)
					printf("\'%s\': \'%s\', ", temp->key, temp->value);
				else
					printf("\'%s\': \'%s\'", temp->key, temp->value);
				count2++;
				temp = temp->next;
			}
		}
		i++;
	}
	if (count > 0)
		printf("}");
	printf("\n");
}
