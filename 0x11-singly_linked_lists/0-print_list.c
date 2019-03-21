#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all the elements of a list.
 *@h: Pointer from another function
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t contanodo =  0;

		while (h != NULL)
		{
			if (h->str != NULL)
			{
				printf("%s\n", h->str);
			}
			else
			{
				printf("[0] (nil)\n");
			}
			h = h->next;
			contanodo++;
		}
		return (contanodo);
}
