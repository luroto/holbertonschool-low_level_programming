#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - Delete a node given its index in a linked list
 *@head: Pointer to the whole linked list
 *@index: Index for the node to be deleted at the linked list
 *Return: 1 if sucessful, otherwise -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *initial, *aux;

	i = 0;

	if (*head == NULL)
		return (-1);
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
