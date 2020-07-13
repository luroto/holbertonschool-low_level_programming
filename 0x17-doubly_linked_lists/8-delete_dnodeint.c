#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete nodes on a double linked list
 *@head: The first node of the double linked list
 *@index: The index to be deleted
 * Return: 1 if successful, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux, *eranode;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		eranode = *head;
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(eranode);
		return (1);
	}
	aux = *head;
	while (aux != NULL)
	{
		if (i == (index - 1))
		{
			eranode = aux->next;
			if (eranode->next != NULL)
				aux->next->next->prev = aux;
			aux->next = aux->next->next;
			free(eranode);
			return (1);
		}
		i++;
		aux = aux->next;
	}
	return (-1);
}
