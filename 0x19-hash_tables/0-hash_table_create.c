#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *@size: Size of the array
 * Return: The newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nuevatabla = NULL;

	nuevatabla = malloc(sizeof(nuevatabla));
	if (nuevatabla == NULL)
		{
			free(nuevatabla);
			return(NULL);
		}
	nuevatabla->size = size;
	nuevatabla->array = malloc(sizeof(hash_node_t) * size);
	if (nuevatabla->array == NULL)
	{
		return(NULL);
	}
	return(nuevatabla);
}
