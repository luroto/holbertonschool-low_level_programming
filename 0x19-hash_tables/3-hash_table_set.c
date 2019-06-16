#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 *@ht: Provided hash table
 *@key: key value
 *@value: Value for the key
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux, *newnode;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	newnode = malloc(sizeof(newnode));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (aux == NULL)
	{
		newnode->next = NULL;
		ht->array[index] = newnode;
		return (1);
	}
	newnode->next = aux;
	ht->array[index] = newnode;
	return (1);
}
