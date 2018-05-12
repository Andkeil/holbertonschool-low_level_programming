#include "hash_tables.h"

/**
 * key_index - generates a unique hash based key and size of array passed in
 * @key: key
 * @size: size of array
 *
 * Return: return unique hash for index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	long int hash;

	hash = hash_djb2(key) % size;
	return (hash);
}
