#include "hash_tables.h"

/**
 * key_index - Returns the index of a given key
 *@key: Key to be searched
 *@size: Size of the array of hash table
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int itera = 0;
	unsigned long int index;

	while (key && key[itera])
	{
		index = (hash_djb2(key)) % size;
		itera++;
	}
	return (index);
}
