#include "lists.h"
#include <stdlib.h>
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *initial, *aux;

	i = 0;

	if (index == 0)
	{
		initial = *head;
		*head = (*head)->next;
		free(initial);
		return (1);
	}
	aux = *head;
	while ((*head) != NULL)
	{
	        if (i == (index - 1))
		{
			initial = (*head)->next;
			(*head)->next = (*head)->next->next;
			free(initial);
			*head = aux;
			return (1);
		}

		*head = (*head)->next;
		i++;
	}
	return (-1);
}
