#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *@ht: Provided hash table
 *@key: key value
 *@value
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux;
	hash_node_t *newnode;
	unsigned long int index;

	if (ht == NULL || strlen(value) == 0 || strlen(key) == 0 || value == NULL)
	{
		return(0);
	}
	newnode = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(key, aux->key) == 0)
		{
			newnode->value = strdup(value);
		}
		newnode->next = aux;
		ht->array[index] = newnode;
		return(1);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	ht->array[index] = newnode;
	return(1);
}
