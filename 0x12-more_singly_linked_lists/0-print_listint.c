#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *
 *
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
			h = h->next;;
			contanodos++;
		}
	}
	return (contanodos);
}
