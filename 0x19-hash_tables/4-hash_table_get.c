#include "hash_tables.h"

/**
 * hash_table_get -
 *
 * Return: 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return(ht->array[index]->value);
	}
	return(NULL);
}
