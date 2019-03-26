#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *print_listint - prints all the elements in a linked list
 *@h: Pointer to the information contained in the structure
 *Return: the node number
 */
size_t print_listint(const listint_t *h)
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
			printf("%i\n", h->n);
			h = h->next;
			contanodos++;
		}
	}
	return (contanodos);
}
