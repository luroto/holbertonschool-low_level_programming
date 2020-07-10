#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked list
 *@h: pointer to the elements to be used as input
 *Return: The number of nodes as a result
*/
size_t listint_len(const listint_t *h)
{
	size_t contanodos = 0;

	if (h == NULL)
	{
		return (contanodos);
	}
	else
	{
		while (h != NULL)
		{
		h = h->next;
		contanodos++;
		}
	}
	return (contanodos);
}
