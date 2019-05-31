#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *@size: Size of the array
 * Return: The newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nuevatabla = NULL;


	nuevatabla = malloc(sizeof(hash_table_t));
	if (nuevatabla == NULL)
	{
		return(NULL);
	}
	nuevatabla->array =  (hash_node_t**) malloc(sizeof(hash_table_t) * size);
	if (nuevatabla->array == NULL)
	{
		free(nuevatabla);
		return(NULL);
	}
	nuevatabla->size = size;
	return(nuevatabla);
}
