#include "hash_tables.h"

/**
 * hash_table_get -Returns the value of a given key
 *@ht:provided hash table
 *@key: Key to be searched
 * Return: Value of the given key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return(NULL);
	}
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
