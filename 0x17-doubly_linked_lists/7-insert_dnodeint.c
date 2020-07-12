#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node in a given position
 *@h: Double pointer for the entire linked list
 *@idx: Index for inserting the node
 *@n: value to be added
 *Return: the created node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *aux;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		return (*h);
	}
	aux = *h;
	while (aux != NULL)
	{
		if (i == (idx - 1))
		{
			newnode->next = aux->next;
			newnode->prev = aux;
			if (aux->next != NULL)
				aux->next->prev = newnode;
			aux->next = newnode;
			return (newnode);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
