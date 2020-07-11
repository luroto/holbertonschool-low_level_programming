#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *list_len - Prints the linked elements in a list
 *@h: pointer to the list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t contanodo = 0;

	while (h != NULL)
	{
		h = h->next;
		contanodo++;
	}
	return (contanodo);
}
